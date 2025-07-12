BGMStop();
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Phew... How would I somehow avoid any
trouble? Being put in charge of this floor
is difficult...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P830600002_06_000");
    MsgDisp("Himuro","Hello.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
What's the matter?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_010");
    MsgDisp("Himuro","Where should we take the lost kids to?");
    MsgDisp("主人公","Ah, we set up a lost children centre.
It's this way.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_020");
    MsgDisp("Himuro","Thanks.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc605",0);
    ScrFadeIn(0);
    MsgDisp("主人公","Phew... How would I somehow avoid any
trouble? Being put in charge of this floor
is difficult...");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(6,254,0,0,0,#1,#1,0,0);
    VoicePlay("P830600002_06_030");
    MsgDisp("Himuro","Good work.");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝!
What's the matter?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_040");
    MsgDisp("Himuro","Haven't you seen a mother looking 
for her own child around here?");
    MsgDisp("主人公","Eh, did you find a lost child?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_050");
    MsgDisp("Himuro","Right.
This is the kid.");
    VoicePlay("P830600002_45_000");
    MsgDisp("Girl","Uuugh... *sniff*...");
    MsgDisp("主人公","It's alright, 
We'll find your Mom soon okay?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_060");
    MsgDisp("Himuro","Should I take her to the 
lost children centre?");
    MsgDisp("主人公","I'll take her!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P830600002_06_070");
    MsgDisp("Himuro","Then let's go together.
If I gave up halfway, 
it would weigh on my conscience.");
    MsgDisp("主人公","Yeah, I got it.
Thank you.");
    MsgClose();
    ScrFadeOut(0,0);
    ChClose(6,0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
