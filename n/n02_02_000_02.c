ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(2,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(2,254,4,0,0,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200002_02_000");
    MsgDisp("Sassa","｛主人公｝. Huh, by the way, while looking
at the list, I couldn't find your name.");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝. Umm well, maybe it's
because it's somewhere in the middle.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("N020200002_02_010");
    MsgDisp("Sassa","Well, that's just average, huh.
Well that's good.");
    MsgClose();
    ChClose(2);
    MsgDisp("主人公","(Hmm, I should study a bit more...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200002_02_020");
    MsgDisp("Sassa","｛主人公｝, how did your exams go?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Hmm, average I guess...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200002_02_030");
    MsgDisp("Sassa","I see, is average not good?
Well, that isn't quite like you.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,4);
    VoicePlay("N020200002_02_040");
    MsgDisp("Sassa","I don't have the grades to say this but,
don't you think you can do better?");
    MsgDisp("主人公","Umm...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,0);
    VoicePlay("N020200002_02_050");
    MsgDisp("Sassa","That's just what I think.
See ya.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(Yeah, he's right...
I've got to study a bit harder!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(2,254,0,0,4,-1,-1,0,0);
    ScrFadeIn(0);
    VoiceEVSPlay(2);
    VoicePlay("N020200002_02_060");
    MsgDisp("Sassa","｛主人公｝.
How did your exams go?");
    MsgDisp("主人公","Ah, ｛颯砂＊＊｝.
Yeah, I did so-so.");
    ChEye(2,0);
    ChMouth(2,2);
    ChMotion(2,4);
    VoicePlay("N020200002_02_070");
    MsgDisp("Sassa","Something's wrong with your face.");
    MsgDisp("主人公","Huh? What do you mean...?");
    ChEye(2,0);
    ChMouth(2,0);
    ChMotion(2,0);
    VoicePlay("N020200002_02_080");
    MsgDisp("Sassa","Maybe it's just my imagination.
But, I don't think you're a so-so person
like your results.");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("N020200002_02_090");
    MsgDisp("Sassa","You are special.");
    MsgDisp("主人公","｛颯砂＊＊｝...");
    ChEye(2,0);
    ChMouth(2,4);
    ChMotion(2,3);
    VoicePlay("N020200002_02_100");
    MsgDisp("Sassa","Well, I don't have the grades to say this
but, let's both do our best next time.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(2);
    MsgDisp("主人公","(｛颯砂＊＊｝, you always have my back.
Yeah, I'll study a bit harder!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(2);
