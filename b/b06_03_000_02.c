BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,#1);
    ChEye(3,4);
    ChMouth(3,4);
    ChMotion(3,4,1);
    ScrFadeIn(0);
    VoicePlay("B060300002_03_000");
    MsgDisp("Honda","Phew...
I guess I'm a bit tired.
Are you okay?");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,#1);
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,0,1);
    MsgDispSksp(0);
    ScrFadeIn(0);
    VoicePlay("B060300002_03_010");
    MsgDisp("Honda","\"Not bad\" is the way the perfect way to
describe it.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,#1);
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,4,1);
    MsgDispSksp(0);
    ScrFadeIn(0);
    VoicePlay("B060300002_03_020");
    MsgDisp("Honda","As long as you had a good time, I'm
relieved.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
