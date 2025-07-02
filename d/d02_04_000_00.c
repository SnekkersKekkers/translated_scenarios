ChLayout(1);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("D020400000_04_000");
MsgDisp("Nanatsumori","Now that I think about it, I guess
I just came here without thinking.");
ChMotion(4,1,1);
VoicePlay("D020400000_04_010");
MsgDisp("Nanatsumori","Let me ask you, then. Are you okay
with it like this?");
MsgSel("The glasses wearing ｛七ツ森＊｝ is fine","I want to go on a date with Nana……");
switch (MsgSelRsltGet()){
    case 0:
    ChEye(4,0);
    ChMouth(4,0);
    ChMotion(4,0,1);
    VoicePlay("D020400000_04_020");
    MsgDisp("Nanatsumori","I see. Even if you preferred 
\"Nana\", I guess it's better not
to change it.");
    MsgDisp("主人公","Yeah.");
    ChEye(4,0);
    ChMouth(4,3);
    VoicePlay("D020400000_04_030");
    MsgDisp("Nanatsumori","Okay, understood.
I won't worry about it then.");
    break ;
    case 1:
    ChEye(4,0);
    ChMouth(4,0);
    VoicePlay("D020400000_04_040");
    MsgDisp("Nanatsumori","Ah......I see.
You're really brave, aren't you?");
    MsgDisp("主人公","Am I?");
    ChEye(4,0);
    ChMouth(4,3);
    ChMotion(4,0,1);
    VoicePlay("D020400000_04_050");
    MsgDisp("Nanatsumori","Well, it's fine. 
Let's try not to cause any trouble.");
    break ;
    default :
    DbgAssert(0);
    break ;
    }
