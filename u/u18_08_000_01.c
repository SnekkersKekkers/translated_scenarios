switch (ChPrmGet(8,6)){
    case 3:
    MsgDisp("主人公","It says...");
    MsgDisp("主人公","\"Hearing that shocked me!
You know, today when I saw the Hanatsubaki
twins, I couldn't stop smiling.");
    MsgDisp("主人公","(They both spoke to ｛Daichi＊＊｝...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","It says...");
    MsgDisp("主人公","\"Today I saw the Hanatsubaki twins! They
kept grinning at me whenever we spoke. I
wonder...\".");
    MsgDisp("主人公","(They both spoke to ｛Daichi＊＊｝...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
