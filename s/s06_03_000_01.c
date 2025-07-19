ChLayout(1);
switch (ChPrmGet(3,6)){
    case 0:
    case 1:
    case 2:
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,5,1);
    VoicePlay("S060300001_03_000");
    MsgDisp("Honda","Yes...!
A kimono.");
    MsgDisp("主人公","Yeah.
What do you think?");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S060300001_03_010");
    MsgDisp("Honda","Of course, it's wonderful!
Today, I get to walk beside a girl with a
perfect score.");
    MsgDisp("主人公","A perfect score?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S060300001_03_020");
    MsgDisp("Honda","Yepyep, 100 points makes a perfect score.");
    MsgDisp("主人公","(What a relief.
｛本多＊＊｝ seems to like it!)");
    break ;
    case 3:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3,1);
    VoicePlay("S060300001_03_030");
    MsgDisp("Honda","A kimono, kimono.");
    MsgDisp("主人公","Yeah.
What do you think?");
    ChEye(3,0);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S060300001_03_040");
    MsgDisp("Honda","It's really the best.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,4,1);
    ChEyeOpenLevel(3,0);
    VoicePlay("S060300001_03_050");
    MsgDisp("Honda","I get to go with you to the shrine while
you're wearing a kimono, I feel like I've
won the lottery!");
    MsgDisp("主人公","(What a relief.
｛本多＊＊｝ seems to be really happy!)");
    break ;
    case 4:
    case 5:
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S060300001_03_060");
    MsgDisp("Honda","So, the first outfit of the year is a
kimono.");
    MsgDisp("主人公","Yeah ...
What do you think?");
    ChFace(3,3);
    ChMotion(3,5,1);
    VoicePlay("S060300001_03_070");
    MsgDisp("Honda","It's the best!");
    ChEye(3,2);
    ChMouth(3,3);
    ChMotion(3,4,1);
    VoicePlay("S060300001_03_080");
    MsgDisp("Honda","No!
I can't even think of what to say!");
    MsgDisp("主人公","Uh, ｛本多＊＊｝?");
    ChEye(3,4);
    ChMouth(3,0);
    ChMotion(3,0,1);
    VoicePlay("S060300001_03_090");
    MsgDisp("Honda","So let me just keep it simple.");
    ChEye(3,4);
    ChMouth(3,3);
    ChMotion(3,1,1);
    VoicePlay("S060300001_03_100");
    MsgDisp("Honda","Beautiful.
Thank you for wearing it for me.");
    MsgDisp("主人公","(｛本多＊＊｝...
He seems really happy!)");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
ChEyeOpenLevel(3,#1);
ChCheek(3,0);
