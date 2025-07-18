switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","It says...\"The Hanatsubaki twins keep
smiling at me and interrogating me. What
did you tell them?\"");
    MsgDisp("主人公","\"...Listen, if you have something to say,
tell me yourself.\"");
    MsgDisp("主人公","(What did those two ask
｛風真＊＊｝ about?)");
    MsgClose();
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Um...");
    MsgDisp("主人公","It says...\"Tell the Hanatsubaki twins to
stay out of it. There's only room for two
people in this relationship");
    MsgDisp("主人公","...");
    MsgDisp("主人公","(What did those two ask
｛風真＊＊｝ about...?)");
    MsgClose();
    break ;
    default :
    DbgAssert(1);
    break ;
    }
