BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4,1);
    ChEyeOpenLevel(2,7);
    ScrFadeIn(0);
    VoicePlay("B060200003_02_000");
    MsgDisp("Sassa","Did you have a good time?
It was somewhat awkward.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200003_02_010");
    MsgDisp("Sassa","Yeah, some days are just like this.
We were just going around in circles.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4,1);
    ScrFadeIn(0);
    VoicePlay("B060200003_02_020");
    MsgDisp("Sassa","Things got a bit awkward,
didn't they? I don't mind, but are you
okay?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
