switch (ChPrmGet(8,6)){
    case 3:
    MsgDisp("主人公","So......");
    MsgDisp("主人公","\"Hearing that shocked me!
You know, today when I saw the Hanatsubaki
twins, I couldn't stop smiling.");
    MsgDisp("主人公","......Because");
    MsgDisp("主人公","(They both spoke to
｛大地＊＊｝......)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","So......");
    MsgDisp("主人公","\"Today I saw the Hanatsubaki twins! They
kept grinning at me whenever we spoke. I
wonder......\".");
    MsgDisp("主人公","......Because");
    MsgDisp("主人公","(They both spoke to
｛大地＊＊｝......)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
