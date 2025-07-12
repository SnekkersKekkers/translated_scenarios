BGOpen("sc760",0);
BGMPlay("BGM_SPORTS_DAY");
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    VoicePlay("O040100000_01_000");
    MsgDisp("Kazama","Wasn't it easy?
It's our win.");
    MsgDisp("主人公","(We did it!
Complete victory!)");
    break ;
    case 3:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChEye(1,3);
    ChMotion(1,3);
    VoicePlay("O040100000_01_010");
    MsgDisp("Kazama","We're a great combination.
As expected of childhood friends, right?");
    MsgDisp("主人公","(Hehe, we did it!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(1,30,0,0,3,#1,#1,0,0);
    ScrFadeIn(0);
    ChMotion(1,3);
    VoicePlay("O040100000_01_020");
    MsgDisp("Kazama","Alright!
Well, just being together
is a win too, right?");
    MsgDisp("主人公","(Hehe, we might be a
good combination.
I'm glad we won!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(1,0,0);
