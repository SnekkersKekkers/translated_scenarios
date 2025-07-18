switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","It says...\"I heard you had a party at the
Hanatsubaki Twins' house. They drew me a
picture of you in pajamas.");
    MsgDisp("主人公","(Eehh∋
What kind of picture did those two draw?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","It says...\"Please tell the Hanatsubaki
twins not to worry. Even if we are busy
together, you'll still have time for them.");
    MsgDisp("主人公","(Ehh∋
What did the two of you tell him...?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
