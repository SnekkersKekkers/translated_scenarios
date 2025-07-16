BGMStop();
BGOpen("sc710",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    MsgDisp("主人公","(I don't know what's going to happen at
the cultural festival, so I have to patrol
carefully...!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P830700002_07_000");
    MsgDisp("Mikage","｛主人公｝.
Is it okay for you to be wandering around
aimlessly?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Right now I'm patrolling.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P830700002_07_010");
    MsgDisp("Mikage","Patrolling huh?
Will you be alright by yourself?");
    MsgDisp("主人公","Yes.
I can't do it if I've not experienced how
to patrol.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P830700002_07_020");
    MsgDisp("Mikage","If there's trouble, you'll fix it huh?
As expected of the best year.");
    MsgDisp("主人公","Hehe, I've been managing the school
festival for three years and that's why I
know how to do it.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P830700002_07_030");
    MsgDisp("Mikage","I'll leave it to you.
But, don't do anything unreasonable.");
    MsgDisp("主人公","Yes!");
    break ;
    case 4:
    case 5:
    MsgDisp("主人公","(I don't know what's going to happen at
the cultural festival, so I have to patrol
carefully...!)");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,#1,#1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P830700002_07_040");
    MsgDisp("Mikage","｛主人公｝.
What are doing all alone?");
    MsgDisp("主人公","Ah, ｛御影＊＊｝.
Ah right now I'm in the middle of
patrolling inside the school.");
    ChEye(7,0);
    ChMouth(7,4);
    ChMotion(7,1);
    VoicePlay("P830700002_07_050");
    MsgDisp("Mikage","Patrolling you say?
Are you patrolling alone?");
    MsgDisp("主人公","Yes.
Because I don't know where there'll be
trouble.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P830700002_07_060");
    MsgDisp("Mikage","As expected of you.
Will the main building be alright without
you there?");
    MsgDisp("主人公","Yes.
The first and second year students are
doing their best.");
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("P830700002_07_070");
    MsgDisp("Mikage","That's right, before I've realized, you've
become a wonderful young lady, haven't
you?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P830700002_07_080");
    MsgDisp("Mikage","Although, it's your last school festival.
Try enjoying it a bit.
Well then.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","Yes, thank you very much!");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChClose(7);
