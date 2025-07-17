switch (ChPrmGet(4,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","It says... \"What did you tell Michiru-san
and Hikaru-san? They told me to get along
with you.");
    MsgDisp("主人公","(｛みちる＊｝,
｛ひかる＊｝... I told
｛七ツ森＊｝ about the
sleepover∋)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","It says... \"You know, you should be
discreet about our relationship. Michiru
and Hikaru tease me a lot.");
    MsgDisp("主人公","(Is this about the sleepover? Geez,
｛みちる＊｝ and
｛ひかる＊｝ are so...
｛七ツ森＊｝, sorry.)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
