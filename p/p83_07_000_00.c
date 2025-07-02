BGMStop();
BGOpen("sc605",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(Alright, is this okay for 
checking the guest list?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoicePlay("P830700000_07_000");
    MsgDisp("Mikage","Oh, do your best, yeah?");
    MsgDisp("主人公","Ah,｛御影＊＊｝!
What's the matter?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P830700000_07_010");
    MsgDisp("Mikage","I came to tease you.");
    MsgDisp("主人公","Hey...
I have to welcome the guests, 
so if you came to play, 
you'll get scolded, you know?");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P830700000_07_020");
    MsgDisp("Mikage","That would be troubling. I'll cheer you on
secretly from the shadows.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","(Hehe.
｛御影＊＊｝ came to cheer me on.)");
    VoicePlay("P830700000_36_000");
    MsgDisp("Male Customer","Excuse me, 
I hope this is the reception.");
    MsgDisp("主人公","Ah, yes!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(Alright, is this okay for 
checking the guest list?)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P830700000_07_030");
    MsgDisp("Mikage","｛主人公｝.
How is the student council work?");
    MsgDisp("主人公","Ah,｛御影＊＊｝.
I'm working at reception,
attending to the guests.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P830700000_07_040");
    MsgDisp("Mikage","The reception is the face of the school.
I ask that you smile brightly
as you usually do.");
    MsgDisp("主人公","It's impolite to smile randomly...
To be polite, I have to be serious?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P830700000_07_050");
    MsgDisp("Mikage","Why is that?
If you smiled, even the big shot 
guests would be beaten though?");
    MsgDisp("主人公","Beaten you say?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P830700000_07_060");
    MsgDisp("Mikage","Yeah, I'm talking as someone who's 
experienced it. I said it, so it 
can't be wrong.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P830700000_07_070");
    MsgDisp("Mikage","Oh, they're coming, they're coming.
See you then～.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","(｛御影＊＊｝ came to support me huh?)");
    VoicePlay("P830700000_36_000");
    MsgDisp("Male Customer","Excuse me, I hope this is the reception.");
    MsgDisp("主人公","Ah, yes!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
