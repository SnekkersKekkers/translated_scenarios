MsgSel("Aim for university.","Aim for a job.","Hear about other people's choice.");
switch (MsgSelRsltGet()){
    case 0:
    MsgDisp("主人公","(Alright!
Let's aim for university!)");
    break ;
    case 1:
    MsgDisp("主人公","(Alright!
Let's get a job!)");
    break ;
    case 2:
    MsgDisp("主人公","(Who should I ask?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
