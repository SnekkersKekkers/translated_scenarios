BGMStop();
BGOpen("sc710",0);
ChLayout(1);
switch (ChPrmGet(1,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    ScrFadeIn(0);
    MsgDisp("主人公","Yeah.
Seems like everyone is enjoying 
the cultural festival...!");
    VoicePlay("P830100002_01_000");
    MsgDisp("Kazama?","Don't walk around smirking
and talking to yourself.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,3,#1,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝.
Hey, I'm patrolling the school you know?");
    ChEye(1,2);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P830100002_01_010");
    MsgDisp("Kazama","Ha?
Will you be alright patrolling 
the school by yourself?");
    MsgDisp("主人公","Of course. I've spent three years
managing the cultural festival
as part of the student council, 
It wasn't just for show.");
    ChEye(1,0);
    VoicePlay("P830100002_48_000");
    MsgDisp("School Girl","Excuse me!
It looks like students from other schools 
are fighting at the school gates!");
    ChEye(1,2);
    ChEyeOpenLevel(1,0);
    MsgDisp("主人公","That's awful! I have to stop it!");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("P830100002_01_020");
    MsgDisp("Kazama","Oi, wait. I'm going too.");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    case 4:
    case 5:
    ScrFadeIn(0);
    MsgDisp("主人公","Yeah.
Seems like everyone is enjoying 
the cultural festival...!");
    VoicePlay("P830100002_01_030");
    MsgDisp("Kazama?","What are you slacking off for?");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(1,254,0,0,3,8,#1,0,0);
    MsgDisp("主人公","Ah, ｛風真＊＊｝! I'm not slacking off,
Right now I'm patrolling around the
school.");
    ChEye(1,4);
    ChMouth(1,2);
    ChMotion(1,0);
    VoicePlay("P830100002_01_040");
    MsgDisp("Kazama","By yourself?");
    MsgDisp("主人公","Yeah, it's alright.
It's already been three years.");
    ChEye(1,2);
    ChMouth(1,3);
    ChMotion(1,0);
    VoicePlay("P830100002_01_050");
    MsgDisp("Kazama","I know that you're tenacious, 
but isn't patrolling a bit different?");
    SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
    SEWait();
    ChEye(1,0);
    ChMouth(1,2);
    VoicePlay("P830100002_48_010");
    MsgDisp("School Girl","Oh no! 
There's smoke coming from the
takoyaki stand!");
    ChEye(1,2);
    MsgDisp("主人公","I understand, I'll go right away!");
    ChEye(1,0);
    ChMouth(1,1);
    ChMotion(1,3);
    VoicePlay("P830100002_01_060");
    MsgDisp("Kazama","Wait, I'll go too!");
    SEPlay("EV_SE_FOOT_RUN_AWAY_ALONE");
    MsgClose();
    ScrFadeOut(0,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(1,#1);
ChMouthOpenLevel(1,#1);
ChCheek(1,0);
