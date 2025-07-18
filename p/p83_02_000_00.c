BGMStop();
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc710",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Phewー, that was heavy. In case of
emergency, a fire extinguishing bucket has
to be placed in front of each classroom.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,4,0,0,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P830200000_02_000");
    MsgDisp("Sassa","｛主人公｝.
How come you're sweating that much?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
I was carrying some buckets with water in
it for extinguishing fires.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    VoicePlay("P830200000_02_010");
    MsgDisp("Sassa","By yourself?");
    MsgDisp("主人公","Yeah, because I'm in charge of this floor.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("P830200000_02_020");
    MsgDisp("Sassa","If it's that much physical work, tell me.
Hey, which classroom too next?");
    MsgDisp("主人公","Ah...
｛颯砂＊＊｝, thank you!");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(2,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc710",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(Phewー, that was heavy. In case of
emergency, a fire extinguishing bucket has
to be placed in front of each classroom.)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(2,254,3,0,4,#1,#1,0,0);
    VoiceEVSPlay(2);
    VoicePlay("P830200000_02_030");
    MsgDisp("Sassa","｛主人公｝.
I was waiting for you.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
But...");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    VoicePlay("P830200000_02_040");
    MsgDisp("Sassa","Even though it's the student council
committee, you still have to do this kind
of manual labour huh...");
    MsgDisp("主人公","Yeah, it's overall management so it can be
anything.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,3);
    VoicePlay("P830200000_02_050");
    MsgDisp("Sassa","Even so, if you have to carry this many
things, tell me.");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,4);
    ChEyeOpenLevel(2,7);
    VoicePlay("P830200000_02_060");
    MsgDisp("Sassa","...Damn, you're watered down.");
    MsgDisp("主人公","Eh?");
    ChEye(2,4);
    ChMouth(2,4);
    ChMotion(2,4);
    ChCheek(2,10);
    VoicePlay("P830200000_02_070");
    MsgDisp("Sassa","Because it's a bucket?
...Was that bad?");
    MsgDisp("主人公","Hehe!");
    ChEye(2,0);
    ChMouth(2,3);
    ChMotion(2,3);
    ChCheek(2,0);
    VoicePlay("P830200000_02_080");
    MsgDisp("Sassa","Oh, you laughed. Then, I'll carry the
rest. If you have any more manual labour,
tell me.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    MsgClose();
    ChClose(2);
    Wait(30);
    MsgDisp("主人公","(｛颯砂＊＊｝ is kind....)");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
