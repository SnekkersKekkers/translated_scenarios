BGOpen("sc624",0);
ChLayout(1);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgClose();
    BGMPlay("BGM_C02_SASSA_C",0.01);
    ChOpen(2,254,2,2,2,0,#1,0,0);
    MsgDisp("主人公","｛颯砂＊＊｝...");
    ChEye(2,2);
    ChMouth(2,2);
    ChMotion(2,2);
    VoicePlay("H2A0200001_02_000");
    MsgDisp("Sassa","So at the very end, the championship was
just out of reach...");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H2A0200001_02_010");
    MsgDisp("Sassa","I couldn't give you a good smile.
I'm sorry.");
    MsgDisp("主人公","No, not at all.
It's fine as long as you're satisfied,
｛颯砂＊＊｝.");
    ChEye(2,2);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("H2A0200001_02_020");
    MsgDisp("Sassa","You're not just my manager. Winning on my
own isn't enough... I wanted the team
to take the championship.");
    MsgDisp("主人公","｛颯砂＊＊｝...");
    ChEye(2,4);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("H2A0200001_02_030");
    MsgDisp("Sassa","If we had won overall...
I could've given you a medal, too.");
    MsgDisp("主人公","I'm happy you thought of that...
｛颯砂＊＊｝, thank you.");
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("H2A0200001_02_040");
    MsgDisp("Sassa","Let us show you our gratitude.
Everyone's in the waiting room.
Let's go.");
    ChClose(2);
    MsgDisp("主人公","(We might have lost, but I'm glad that I
stayed as the track and field club
manager...)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(2,0,0);
