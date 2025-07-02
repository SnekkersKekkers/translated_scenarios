ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoiceEVSPlay(5);
VoicePlay("B180500000_05_000");
MsgDisp("Hiiragi","｛主人公｝.");
MsgDisp("主人公","Hm?
...HUh?");
ChMotion(5,4);
ChCheek(5,7);
VoicePlay("B180500000_05_010");
MsgDisp("Hiiragi","I tried to make it 
as natural as possible...
But how about this way of addressing you?");
MsgSel("Yeah, that's fine!","Yeah～, it's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChMotion(5,0);
    VoiceEVSPlay(5);
    VoicePlay("B180500000_05_020");
    MsgDisp("Hiiragi","｛主人公｝.");
    MsgDisp("主人公","Yeah?");
    ChEye(5,4);
    ChMotion(5,0);
    ChCheek(5,10);
    VoicePlay("B180500000_05_030");
    MsgDisp("Hiiragi","Today is a day to commemorate.");
    MsgDisp("主人公","(I'm somewhat flustered...)");
    break ;
    case 1:
    ChEye(5,2);
    ChMotion(5,2);
    ChCheek(5,0);
    VoicePlay("B180500000_05_040");
    MsgDisp("Hiiragi","I was rather tense.
It would be nice if I could say 
it more naturally next time.");
    MsgDisp("主人公","(I wonder if I made him feel bad...)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
ChEyeOpenLevel(5,-1);
ChMouthOpenLevel(5,-1);
ChCheek(5,0);
