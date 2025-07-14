ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
VoiceEVSPlay(7);
VoicePlay("B180700000_07_000");
MsgDisp("Mikage","｛主人公｝. How's that?");
MsgDisp("主人公","Ehhh∋ What's wrong, ｛御影＊＊｝, that
way of addressing me...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B180700000_07_010");
MsgDisp("Mikage","...Is it no good?
I thought it would change the mood in a
fun way.");
MsgSel("No, it's fine.","Mm~, it's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(7,0);
    ChMouth(7,3);
    ChMotion(7,3);
    VoicePlay("B180700000_07_020");
    MsgDisp("Mikage","Oh, 
Then, let's go with that for now.");
    MsgDisp("主人公","Hehe, yeah.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    ChCheek(7,5);
    VoicePlay("B180700000_07_030");
    MsgDisp("Mikage","I said it myself,
but I'm getting bashful.");
    MsgDisp("主人公","(When you say something like that, I'll
feel shy too...)");
    ChCheek(7,0);
    break ;
    case 1:
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("B180700000_07_040");
    MsgDisp("Mikage","Sorry, I got too carried away.");
    MsgDisp("主人公","I'm sorry...");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("B180700000_07_050");
    MsgDisp("Mikage","Don't apologize, I'll get embarrassed.
Let's not count what happened just now?");
    MsgDisp("主人公","(Hmmm...
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
