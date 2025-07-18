BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(22,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,2,0,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H2A2200001_22_000");
    MsgDisp("Hikaru","Good work, Mari.");
    MsgDisp("主人公","Ah, ｛ひかる＊｝.
We lost...");
    ChMouth(22,0);
    ChMotion(22,4,1);
    VoicePlay("H2A2200001_22_010");
    MsgDisp("Hikaru","To think our Haba High track team would
lose. There are all sorts of great people
in this world～ Right?");
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the track and field club
manager...)");
    break ;
    case 4:
    case 5:
    BGMPlay("BGM_C22_HIKARU_A",0.01);
    ChOpen(22,254,0,2,0,#1,#1,0,0);
    Wait(15,0);
    ScrFadeIn(0);
    VoicePlay("H2A2200001_22_020");
    MsgDisp("Hikaru","That's too bad...");
    MsgDisp("主人公","｛ひかる＊｝.
Yeah, we lost...");
    ChMotion(22,2,1);
    VoicePlay("H2A2200001_22_030");
    MsgDisp("Hikaru","I never thought the Haba High track and
field team would lose.
The world really is full of surprises.");
    ChEye(22,0);
    ChMouth(22,0);
    ChMotion(22,0,1);
    VoicePlay("H2A2200001_22_040");
    MsgDisp("Hikaru","But you know, Hikaru was super inspired.
The track team was cool too, and Mari's
support was perfect.");
    ChEye(22,0);
    ChMouth(22,3);
    ChMotion(22,3,1);
    VoicePlay("H2A2200001_22_050");
    MsgDisp("Hikaru","Hikaru will give you and your team the
grand prize! So, cheer up. Okay?");
    MsgDisp("主人公","(｛ひかる＊｝...We might have lost, but
I'm glad that I stayed as the track and
field club manager!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
