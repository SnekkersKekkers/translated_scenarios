switch (ChPrmGet(8,6)){
    case 3:
    MsgDisp("主人公","Let's see...");
    MsgDisp("主人公","\"Hey hey, listen to this, you'll be
shocked! Today I met the Hanatsubaki
twins. They were all smiles, I wonder why?\"");
    MsgDisp("主人公","...Is what it says.");
    MsgDisp("主人公","(They both spoke to ｛Daichi＊＊｝...)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Let's see...");
    MsgDisp("主人公","\"Today I met the Hanatsubaki twins! But
they didn't say anything, just kept looking
at me and smiling. I wonder why...\"");
    MsgDisp("主人公","...Is what it says.");
    MsgDisp("主人公","(They both spoke to ｛Daichi＊＊｝...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
