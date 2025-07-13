ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
VoicePlay("B180400000_04_000");
VoiceEVSPlay(4);
MsgDisp("Nanatsumori","......｛主人公｝.");
MsgDisp("主人公","Eh?");
VoicePlay("B180400000_04_010");
MsgDisp("Nanatsumori","I've always wanted to call you that.
No good?");
MsgSel("No, it's fine.","Mm~, it's a bit...");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B180400000_04_020");
    MsgDisp("Nanatsumori","Thank you.");
    MsgDisp("主人公","It gives me a little bit of
a ticklish feeling though.");
    ChEye(4,4);
    ChMotion(4,1,1);
    VoicePlay("B180400000_04_030");
    MsgDisp("Nanatsumori","Right.
I felt a good sensation too.");
    MsgDisp("主人公","Hehe!");
    ChEye(4,4);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B180400000_04_040");
    VoiceEVSPlay(4);
    MsgDisp("Nanatsumori","In order to get used to
it, I'll say it again.
｛主人公｝.");
    MsgDisp("主人公","(No matter how many times he 
says it, my heart skips a beat...)");
    break ;
    case 1:
    ChEye(4,2);
    ChMouth(4,4);
    ChMotion(4,2,1);
    VoicePlay("B180400000_04_050");
    MsgDisp("Nanatsumori","Guess you didn't like it.
Sorry.");
    MsgDisp("主人公","I'm sorry...");
    ChEye(4,2);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("B180400000_04_060");
    MsgDisp("Nanatsumori","Nah, pay it no mind.");
    MsgDisp("主人公","(Hmmm...
Did I do something wrong?)");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
