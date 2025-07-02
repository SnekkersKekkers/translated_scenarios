BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,30,3,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200000_02_000");
    MsgDisp("Sassa","We did it, we won!");
    MsgDisp("主人公","(Yeah, we won with our teamwork!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,30,3,0,3,-1,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200000_02_010");
    MsgDisp("Sassa","We did it!
Your control is good.
You've got great shoulders!");
    MsgDisp("主人公","(I'm glad I did my best!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,30,3,3,3,0,-1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040200000_02_020");
    MsgDisp("Sassa","It's our win!
You have great form.
You got a lot in.");
    MsgDisp("主人公","(We did it!　I'm happy we won!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0);
ChClose(2,0,0);
