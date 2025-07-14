ChLayout(1);
ScrFadeIn(0);
switch (ChPrmGet(5,6)){
    case 0:
    case 1:
    case 2:
    MsgClose();
    ChOpen(5,254,0,0,0,#1,#1,0,0);
    VoicePlay("N020500002_05_000");
    MsgDisp("Hiiragi","Hello.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝. Hello.");
    ChMouth(5,4);
    VoicePlay("N020500002_05_010");
    MsgDisp("Hiiragi","Your back is clearly visible.
Are you prepared?");
    MsgDisp("主人公","Do you mean my ranking...?");
    VoicePlay("N020500002_05_020");
    MsgDisp("Hiiragi","Yeah.
See you.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(｛柊＊＊＊｝ must be busy...
If he's doing his best, then I should
too...)");
    break ;
    case 3:
    MsgClose();
    ChOpen(5,254,0,4,4,#1,#1,0,0);
    VoicePlay("N020500002_05_030");
    MsgDisp("Hiiragi","Are you satisfied by this outcome?");
    MsgDisp("主人公","Umm... Are you, ｛柊＊＊＊｝?");
    ChEye(5,2);
    ChMouth(5,4);
    ChMotion(5,1);
    VoicePlay("N020500002_05_040");
    MsgDisp("Hiiragi","I have never been satisfied by an exam.
It just exposes my own worthlessness every
time.");
    MsgDisp("主人公","I see...
I guess it shows how average I am.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("N020500002_05_050");
    MsgDisp("Hiiragi","You think so, huh, nice work.
The both of us should take it easy, then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Alright, I'll study harder next time!)");
    break ;
    case 4:
    case 5:
    MsgClose();
    ChOpen(5,254,0,0,4,#1,#1,0,0);
    VoiceEVSPlay(5);
    VoicePlay("N020500002_05_060");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Ah, ｛柊＊＊＊｝.");
    ChEye(5,4);
    ChMotion(5,4);
    VoicePlay("N020500002_05_070");
    MsgDisp("Hiiragi","Do you dislike studying?");
    MsgDisp("主人公","Eh.
Hmm, I'm not sure...");
    ChMotion(5,0);
    VoicePlay("N020500002_05_080");
    MsgDisp("Hiiragi","With your dedication to what fascinates
you, just a small interest in studying
could propel you to the top quickly.");
    ChEye(5,2);
    VoicePlay("N020500002_05_090");
    MsgDisp("Hiiragi","Ah... Was what I said not convincing
enough?");
    MsgDisp("主人公","No it was, thank you.
I'll try my best to be more interested.");
    ChEye(5,4);
    ChMouth(5,3);
    ChMotion(5,3);
    VoicePlay("N020500002_05_100");
    MsgDisp("Hiiragi","Yeah, I think your ranking would jump
right to the first place.
If that's what you are after.");
    ChEye(5,2);
    ChMouth(5,4);
    VoicePlay("N020500002_05_110");
    MsgDisp("Hiiragi","Ah... Well, maybe that wasn't convincing
either.");
    MsgDisp("主人公","Hehe, thank you.
For some reason, that motivated me.");
    ChEye(5,4);
    ChMotion(5,0);
    VoicePlay("N020500002_05_120");
    MsgDisp("Hiiragi","Woah, I wish you good luck then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(5);
    MsgDisp("主人公","(Hehe, ｛柊＊＊＊｝ is good at motivating
people.
Alright, I'll study harder next time!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(5);
