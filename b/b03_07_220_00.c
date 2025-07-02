BGOpen("tr300",0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0);
VoicePlay("B030722000_07_000");
MsgDisp("Mikage","Here's today's extra credit.
I don't want to hear anything about it
being boring or too normal.");
VoicePlay("B030722000_38_000");
MsgDisp("Students","Okaay.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B030722000_07_010");
MsgDisp("Mikage","But I'll still hear out your requests.
Raise your hand for where you want to go.");
MsgSel("Raise your hand for Habataki Tower","Raise your hand for the exhibition area");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("B030722000_07_020");
    MsgDisp("Mikage","Alright then.
I'll lead the Habataki Tower group,
so please follow me.");
    MsgDisp("主人公","Okay!");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,2);
    MsgDispSksp(1,0);
    VoicePlay("B030722000_07_030");
    MsgDisp("Mikage","Whoa, now that's the spirit.
Ready to go?");
    MsgDispSksp(0);
    break ;
    case 1:
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("B030722000_07_040");
    MsgDisp("Mikage","Exhibition corner is this way.
I'll be supervising.");
    VoicePlay("B030722000_38_010");
    MsgDisp("Students","Okay!");
    MsgDispSksp(1,0);
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,0);
    VoicePlay("B030722000_07_050");
    MsgDisp("Mikage","Alright, let's go!
No falling asleep if you get bored, okay?");
    MsgDispSksp(0);
    break ;
    default :
    DbgAssert(0);
    break ;
    }
