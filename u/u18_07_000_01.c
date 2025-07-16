switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","So......");
    MsgDisp("主人公","It says... \"Michiru and Hikaru offered to
trade me a picture of you in pajamas for
the final exam questions.▼～");
    MsgDisp("主人公","(Eeeh∋
How did those two even obtain such a
photo......!)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","So......");
    MsgDisp("主人公","\"When I bump into Michiru and Hikaru,
they're always talking about you It seems
as though they like you too.");
    MsgDisp("主人公","(What kind of stories are they telling?
I'm curious......!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
