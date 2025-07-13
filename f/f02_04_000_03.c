BGMStop();
BGOpen("sc000",1);
ChLayout(1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("F020400003_04_000");
MsgDisp("Nanatsumori","Apparently, there's a legendary church
on the Haba High campus. And a handful
of rumors surrounding it.");
MsgDisp("主人公","Right.");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("F020400003_04_010");
MsgDisp("Nanatsumori","There are two main stories.
The super funny one, and the scary one.
Which one do you want to hear?");
MsgDisp("主人公","Um......
Either one is fine......");
ChEye(4,0);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("F020400003_04_020");
MsgDisp("Nanatsumori","Well, if you say so.
I'll tell you the super funny one.
It'll definitely make you laugh.");
MsgDisp("主人公","Are you sure about that......?");
ChEye(4,0);
ChMouth(4,0);
VoicePlay("F020400003_04_030");
MsgDisp("Nanatsumori","The rumored church.
In reality, it's not a church at all......");
MsgDisp("主人公","If it's not a church, then......?");
ChEye(4,0);
ChMouth(4,4);
ChMotion(4,1,1);
VoicePlay("F020400003_04_040");
MsgDisp("Nanatsumori","It's hard to say out loud.
Come close for a second.");
MsgDisp("主人公","O-Okay.");
MsgClose();
SEPlay("EV_SE_FOOT_039");
ChClose(4,0,30);
MsgClose();
ChLayout(0);
ChNanaType(0);
ChOpen(4,254,0,0,4,#1,0,0,0,0,60);
SEWait();
VoicePlay("F020400003_04_050");
MsgDisp("Nanatsumori","............");
ChEye(4,0);
ChMouth(4,3);
VoicePlay("F020400003_04_060");
MsgDisp("Nanatsumori","That——");
ScrQuake(1);
MsgDisp("主人公","......Eh∋
Ha......Hahaha!
Oh my god, stop! That tickles!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT");
ChClose(4,0,30);
MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,254,0,4,4,#1,0,8,0,0,60);
SEWait();
VoicePlay("F020400003_04_070");
MsgDisp("Nanatsumori","............");
MsgDisp("主人公","Ha......okay, you win.
Anyone would laugh if you tickled them
like that!");
ChEye(4,4);
ChMouth(4,4);
ChMotion(4,2,1);
VoicePlay("F020400003_04_080");
MsgDisp("Nanatsumori","This is......
Maybe I'm not funny......
I'm kind of sorry.");
MsgDisp("主人公","(???)");
