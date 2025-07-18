BGOpen("ho210",2);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgDisp("主人公","Uhm...");
    MsgDisp("主人公","\"It says...\"The Hanatsubaki twins suddenly
asked me about you. I wonder how I should
have answered them...");
    MsgDisp("主人公","(What kind of things did he hear...?)");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","Hmm...");
    MsgDisp("主人公","It says...\"
They told me so many stories about you.
Stories I had never heard before.");
    MsgDisp("主人公","(Huh∋
What did the two of you talk about...?)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
