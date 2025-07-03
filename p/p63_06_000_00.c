BGMPlay("BGM_PLACE_SHOP");
switch (ChPrmGet(6,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    BGOpen("sc722",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I gave my best doing preparations but I
wonder if everyone will come...?)");
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630600000_06_000");
    MsgDisp("Himuro","Is this the Gardening Club?");
    MsgDisp("主人公","Ah, ｛氷室＊＊｝.
You came?");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600000_06_010");
    MsgDisp("Himuro","It's because I had some spare time.
...Then, what are you doing?");
    MsgDisp("主人公","We're serving tea and cookies made with
the herbs grown by the club.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600000_06_020");
    MsgDisp("Himuro","Ah, I see.
Then, I'll have some.");
    MsgDisp("主人公","Yes, right awayー!");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,-1);
    ChMouth(6,-1);
    ChCheek(6,0);
    break ;
    case 4:
    case 5:
    BGOpen("sc722",0);
    ScrFadeIn(0);
    MsgDisp("主人公","(I gave my best doing preparations but I
wonder if everyone will come...?)");
    MsgClose();
    ChOpen(6,254,0,0,0,-1,-1,0,0);
    VoicePlay("P630600000_06_030");
    MsgDisp("Himuro","I came.");
    MsgDisp("主人公","｛氷室＊＊｝!
Welcome.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,0);
    VoicePlay("P630600000_06_040");
    MsgDisp("Himuro","The, what are you doing?");
    MsgDisp("主人公","You can enjoy tea and cookies
made with herbs. The herbs were grown
by the Gardening Club.");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,2);
    VoicePlay("P630600000_06_050");
    MsgDisp("Himuro","Ah, I see.
...looks like it's fileld with love.");
    MsgDisp("主人公","Of course, it's fully loaded▼");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,4);
    ChEyeOpenLevel(6,0);
    ChCheek(6,10);
    VoicePlay("P630600000_06_060");
    MsgDisp("Himuro","Then, I'll eat some.");
    MsgDisp("主人公","Yes, with pleasureー!");
    ChEye(6,0);
    ChMouth(6,0);
    ChMotion(6,5);
    VoicePlay("P630600000_06_070");
    MsgDisp("Himuro","...What's with that enthusiasm.");
    MsgClose();
    ScrFadeOut(0,0);
    ChEye(6,-1);
    ChMouth(6,-1);
    ChCheek(6,0);
    break ;
    default :
    DbgAssert(1);
    break ;
    }
