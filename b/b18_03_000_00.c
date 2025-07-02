MsgClose();
ChOpen(3,255,0,0,0,-1,-1,0,0);
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
VoiceEVSPlay(3);
VoicePlay("B180300000_03_000");
MsgDisp("Honda","｛主人公｝.");
MsgDisp("主人公","Huh?");
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4);
VoicePlay("B180300000_03_010");
MsgDisp("Honda","Ah, sorry for the suddeness. I was just 
thinking... I'd like to call you by your 
name. Is that okay?");
MsgSel("Yeah, it's fine.","Hmm, I'm not sure...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,5);
    VoicePlay("B180300000_03_020");
    MsgDisp("Honda","Really∋　Yay!");
    ChEye(3,0);
    ChMouth(3,4);
    ChMotion(3,4);
    VoicePlay("B180300000_03_030");
    VoiceEVSPlay(3);
    MsgDisp("Honda","Ahem... ｛主人公｝.");
    ChEye(3,3);
    ChMouth(3,3);
    ChMotion(3,3);
    ChEyeOpenLevel(3,0);
    VoicePlay("B180300000_03_040");
    MsgDisp("Honda","This way of addressing you feels
refreshing!");
    MsgDisp("主人公","(It feels a little embarrassing..)");
    break ;
    case 1:
    ChEye(3,0);
    ChMouth(3,0);
    ChMotion(3,1);
    VoicePlay("B180300000_03_050");
    MsgDisp("Honda","I see. Don't worry about it. It was just
a sudden idea!");
    MsgDisp("主人公","(Did I do something wrong...?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(3,-1);
ChCheek(3,0);
