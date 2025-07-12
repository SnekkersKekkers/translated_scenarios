BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,3,1);
    ChEyeOpenLevel(2,0);
    ScrFadeIn(0);
    VoicePlay("B060200000_02_000");
    MsgDisp("Sassa","Ah, that was fun.
Thanks for inviting me.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(2,3);
    ChMouth(2,3);
    ChMotion(2,4,1);
    ChEyeOpenLevel(2,0);
    ScrFadeIn(0);
    VoicePlay("B060200000_02_010");
    MsgDisp("Sassa","That was a lot of fun, thanks!
I'll invite you out next time!");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200000_02_020");
    MsgDisp("Sassa","Ah, I smiled a lot today too.
When we're together, I'm always smiling.
Thank you!");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
