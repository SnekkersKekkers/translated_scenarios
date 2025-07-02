BGDateAfterOpen();
ChLayout(1);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgDispSksp(1,-1);
    ChEye(5,0);
    ChMouth(5,0);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500002_05_000");
    MsgDisp("Hiiragi","Thank you for today.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgDispSksp(1,-1);
    ChEye(5,0);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500002_05_010");
    MsgDisp("Hiiragi","I was able to relax a bit thanks
to you. It's a nice way to spend the
day.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgDispSksp(1,-1);
    ChEye(5,4);
    ChMouth(5,4);
    ChMotion(5,0,1);
    ScrFadeIn(0);
    VoicePlay("B060500002_05_020");
    MsgDisp("Hiiragi","I get a lot of different emotions
when I'm with you. Because of that, it
can be tough. But I enjoy this feeling.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
