switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Uhm......");
    MsgDisp("主人公","It says... \"Chiru-chan and Pika-chan asked
me how I feel about you. What kind of
answer should I give?");
    MsgDisp("主人公","(Ehhh∋ What kind of things did you guys
ask? How did ｛本多＊＊｝ answer......?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Uhm......");
    MsgDisp("主人公","It says... \"Chiru-chan and Pika-chan told
me they would tell me a secret about you.
You should me it first.");
    MsgDisp("主人公","(Ehhh∋ What did you guys talk about? But
｛本多＊＊｝ can't keep secrets anyway...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
