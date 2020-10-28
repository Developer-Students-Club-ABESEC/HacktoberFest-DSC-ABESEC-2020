import logging

from telegram.ext import Updater,CommandHandler,MessageHandler,Filters
#basic logging
logging.basicConfig(format='%(asctime)s - %(name)s %(levelname)s - %(message)s',level=logging.INFO)

logger=logging.getLogger(__name__)

#

TOKEN="1120204705:AAHyfpz_916XPB0IZkp_OG2oL7sIO1gzGEo"

def start(bot,update):
    print(update)
    author=update.message.from_user.first_name
    reply="Hi!{}".format(author)
    bot.send_message(chat_id=update.messsage.chat_id,text=reply)

def help(bot,update):
    help_txt="hey this a help text "
    bot.send_message(chat_id=update.msg.chat_id,text=help_txt)

def echo_text(bot,update):
    reply=update.message.text
    bot.send_message(chat_id=update.message.chat_id,text=reply)

def echo_sticker(bot,update):
    bot.send_sticker(chat_id=update.message.sticker.file_id,sticker=update.message.sticker.file_id)

def error(bot,update):
    logger.error("Update '%s' caused error '%s'",update,update.error)

def main():
    updater=Updater(TOKEN)

    dp=updater.dispatcher

    dp.add_handler(CommandHandler("start",start))
    dp.add_handler(CommandHandler("Help", help))
    dp.add_handler(MessageHandler(Filters.text,echo_text))
    dp.add_handler(MessageHandler(Filters.sticker,echo_sticker))
    dp.add_error_handler(error)

    updater.start_polling()
    updater.idle()

if __name__ == "__main__":
    main()
