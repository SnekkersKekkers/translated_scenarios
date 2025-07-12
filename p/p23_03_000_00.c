BGMStop(1.7);
Wait(60,0);
BGOpen("sc740",0);
MsgClose();
ChOpen(3,38,0,0,0,#1,#1,0,0);
ChLayout(1);
ScrFadeIn(0,60);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    break ;
    case 4:
    case 5:
    VoicePlay("P230300000_03_000");
    MsgDisp("Honda","Mitsuhime, sorry to have kept you waiting.");
    MsgDisp("主人公","Hehe, ｛本多＊＊｝......
Or should I say Kanbei-sama?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("P230300000_03_010");
    MsgDisp("Honda","Yep yep.
We're already on the mark.");
    MsgDisp("主人公","I'm super nervous......
I hope it goes well.");
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1,1);
    VoicePlay("P230300000_03_020");
    MsgDisp("Honda","It'll definitely be fine. Since the
costume fits you that well, no one will
even notice if you mess up your lines.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,0,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("P230300000_03_030");
    MsgDisp("Honda","They prepared such an amazing armor and
helmet, even I look like the real deal.");
    MsgDisp("主人公","Yeah, 
it looks just like the real thing?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P230300000_03_040");
    MsgDisp("Honda","Yes, no one really knows the truth, so
don't worry, let's do our own version of
Kuroda Kanbei and Mitsuhime?");
    VoicePlay("P230300000_47_000");
    MsgDisp("Broadcast","Habataki High School's play will begin
shortly.");
    SEPlay("EV_SE_038");
    SEWait();
    ChEye(3,1);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("P230300000_03_050");
    MsgDisp("Honda","Now, let's go to battle!");
    MsgDisp("主人公","Y-Yeah!");
    MsgDisp("主人公","('Our version of Kuroda Kanbei and
Mitsuhime', huh...... ｛本多＊＊｝, are you
scheming something??)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
