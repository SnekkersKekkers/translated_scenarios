BGDateBeforeOpen();
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Looks like I got here a little early...
Huh?)");
MsgDisp("主人公","｛颯砂＊＊｝?");
BGMPlay("BGM_C02_SASSA_A",0.01);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,253,3,0,2,-1,-1,0,0);
    VoicePlay("B010200002_02_000");
    MsgDisp("Sassa","Huh?
You're early.");
    MsgDisp("主人公","You are too.
I didn't think you'd arrive first.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200002_02_010");
    MsgDisp("Sassa","What's that mean?
Do I seem like I lose track of time?");
    MsgDisp("主人公","No, that's not quite what I meant. More
like the type that's always last minute.");
    MsgDispSksp(1,0);
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    ChEyeOpenLevel(2,8);
    VoicePlay("B010200002_02_020");
    MsgDisp("Sassa","Ohh, I do that a lot too.");
    MsgDispSksp(0);
    break ;
    case 3:
    MsgClose();
    ChOpen(2,253,0,0,4,-1,-1,0,0);
    VoicePlay("B010200002_02_030");
    MsgDisp("Sassa","I wanted to get here earlier than you
today.");
    MsgDisp("主人公","Huh? Why?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("B010200002_02_040");
    MsgDisp("Sassa","Even if you ask, I can't really say...
It's just how I feel.");
    MsgDisp("主人公","Well, then next time I'll come even
earlier.");
    MsgDispSksp(1,0);
    ChEye(2,3);
    ChMouth(2,4);
    ChMotion(2,3);
    ChEyeOpenLevel(2,0);
    VoicePlay("B010200002_02_050");
    MsgDisp("Sassa","Haha, fine by me.
This can be our new sport.");
    MsgDispSksp(0);
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,253,3,0,4,-1,-1,0,0);
    VoicePlay("B010200002_02_060");
    MsgDisp("Sassa","What's up?
You're early.");
    MsgDisp("主人公","So are you!
Why?");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("B010200002_02_070");
    MsgDisp("Sassa","You asked why too... Seems like I walked
here normally at first? But before I knew
it, I started running.");
    MsgDisp("主人公","What?　You came here running?");
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("B010200002_02_080");
    MsgDisp("Sassa","Yeah. I thought about us meeting up,
and next thing I knew, I was running here.");
    MsgDisp("主人公","Hehe. Somehow, that makes me a little
happy.");
    MsgDispSksp(1,0);
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,2);
    ChCheek(2,10);
    VoicePlay("B010200002_02_090");
    MsgDisp("Sassa","I end up running towards things I like
naturally... I'm sort of like a dog, in
that way.");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
