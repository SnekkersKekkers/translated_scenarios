switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    case 3:
    MsgClose();
    ChOpen(1,254,0,4,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100001_01_000");
    MsgDisp("Kazama","You have a good reputation. A guy from
track and field said he was able to set a
record because of the manager.");
    MsgDisp("主人公","(I'm glad I worked hard as the Track and
Field club manager!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    ChLayout(1);
    ScrFadeIn(0);
    VoicePlay("X110100001_01_010");
    MsgDisp("Kazama","The Track and Field club seems to be doing
well.");
    MsgDisp("主人公","Yeah!
We set a lot of new records at the
competition.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,1);
    VoicePlay("X110100001_01_020");
    MsgDisp("Kazama","......If I had someone to support me like
that, I could set a record, too.");
    MsgDisp("主人公","(Being able to help even a little bit
makes me happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
