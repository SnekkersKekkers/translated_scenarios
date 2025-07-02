BGMStop();
BGOpen("sc605",0);
ScrFadeIn(0);
switch (ChPrmGet(7,6)){
    case 0:
    case 1:
    case 2:
    break ;
    case 3:
    VoicePlay("P830700001_41_000");
    MsgDisp("Male Student","Excuse meー.
Do you have any cardboard～?");
    MsgDisp("主人公","Yeーs, it's all gathered behind the gym.
Please write a note of the quantity
you need, your class, and your name.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P830700001_07_000");
    MsgDisp("Mikage","｛主人公｝.
You seem busy, huh?");
    MsgDisp("主人公","Ah,｛御影＊＊｝!
Did you need something?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,3);
    VoicePlay("P830700001_07_010");
    MsgDisp("Mikage","That's right, I am asking for
the hard working Majime-chan, alone.");
    MsgDisp("主人公","Yes...?");
    VoicePlay("P830700001_46_000");
    MsgDisp("School Girl A","Um, excuse me～. But we don't have enough
blackout curtains.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P830700001_07_020");
    MsgDisp("Mikage","Seems like I can't borrow her.
Well, then.");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","Eh,｛御影＊＊｝ ——");
    VoicePlay("P830700001_48_000");
    MsgDisp("School Girl B","Exーcuse me.
Could I get two rolls of packing tape?");
    MsgDisp("主人公","Ah, yes!
Please wait a moment.");
    break ;
    case 4:
    case 5:
    VoicePlay("P830700001_41_030");
    MsgDisp("Male Student","Excuse meー.
Do you have any cardboard～?");
    MsgDisp("主人公","Yeーs, it's all gathered behind the gym.
Please write a note of the quantity
you need, your class, and your name.");
    MsgClose();
    SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
    SEWait();
    ChOpen(7,254,0,0,0,-1,-1,0,0);
    VoiceEVSPlay(7);
    VoicePlay("P830700001_07_030");
    MsgDisp("Mikage","｛主人公｝,
You're busy.");
    MsgDisp("主人公","Ah,｛御影＊＊｝!
Did you want something?");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,1);
    VoicePlay("P830700001_07_040");
    MsgDisp("Mikage","I'm visiting you on the battlefield.
I came to talk to Majime-chan.");
    MsgDisp("主人公","Hehe.
But I'm a bit busy right no——");
    VoicePlay("P830700001_46_010");
    MsgDisp("School Girl A","Um, excuse me.
There's not enough blackout
curtains in our class.");
    ChEye(7,2);
    ChMouth(7,0);
    ChMotion(7,2);
    VoicePlay("P830700001_07_050");
    MsgDisp("Mikage","If I had you all to myself,
everyone would be angry with me.
I'll cheer you on from behind the scenes.");
    ChEye(7,0);
    ChMouth(7,0);
    ChMotion(7,0);
    VoicePlay("P830700001_07_060");
    MsgDisp("Mikage","Then, do your best!");
    SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
    ChClose(7);
    MsgDisp("主人公","Ah,｛御影＊＊｝ ——");
    VoicePlay("P830700001_48_010");
    MsgDisp("School Girl B","Exーcuse me.
Could I get two rolls of packing tape?");
    MsgDisp("主人公","Yeーs!
Please wait a moment.");
    break ;
    default :
    DbgAssert(1);
    break ;
    }
MsgClose();
ScrFadeOut(0,0);
ChEye(7,-1);
ChMouth(7,-1);
