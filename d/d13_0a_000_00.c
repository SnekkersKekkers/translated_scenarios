BGOpen("sc530",0);
ChLayout(2);
MsgClose();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(1,254,0,0,0,#1,#1,0,0,0,30);
ChOpen(2,254,0,0,4,#1,#1,0,1,0,30);
ChOpen(6,254,0,0,4,#1,#1,0,2,0,30);
ScrFadeIn(0);
MsgDisp("主人公","Ah, what are you all together for and
talking about?");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("D130A00000_06_000");
MsgDisp("Himuro","Wow...
you can act like that?");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("D130A00000_02_000");
MsgDisp("Sassa","That's quite a good performance.");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0,1);
ChEyeOpenLevel(1,0);
VoicePlay("D130A00000_01_000");
MsgDisp("Kazama","You guys don't get it.
There's no way your acting is that
top-notch right?");
ChEye(1,0);
ChMouth(1,3);
ChMotion(1,0);
VoicePlay("D130A00000_01_010");
MsgDisp("Kazama","...Right?");
MsgDisp("主人公","Hey, come on now, what are you talking
about?");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0);
ChEyeOpenLevel(1,0);
VoicePlay("D130A00000_01_020");
MsgDisp("Kazama","See.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,3);
VoicePlay("D130A00000_06_010");
MsgDisp("Himuro","She really is just an airhead...
As expected of childhood friends, you know
her well.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("D130A00000_02_010");
MsgDisp("Sassa","Eh?
I'm your childhood friend too though.");
MsgDisp("主人公","???");
ChEye(1,0);
ChMouth(1,0);
ChMotion(1,0);
VoicePlay("D130A00000_01_030");
MsgDisp("Kazama","What day is today?");
MsgDisp("主人公","Eh... Ah, it's 
Valentine's day!");
ChEye(1,2);
ChMouth(1,3);
ChMotion(1,0,1);
VoicePlay("D130A00000_01_040");
MsgDisp("Kazama","Haa... well, it's only natural for three
guys to talk to each other on that kind of
day.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(1,0,30);
Wait(120,1);
MsgClose();
ChClose(2,0,30);
ChClose(6,0,30);
ChLayout(1);
MsgClose();
ChOpen(2,254,4,3,3,0,#1,0,1,0,30);
ChOpen(6,254,0,0,4,#1,#1,0,2,0,30);
VoicePlay("D130A00000_02_020");
MsgDisp("Sassa","Ryota was anxiously looking around for
you.");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("D130A00000_06_020");
MsgDisp("Himuro","Yeah, he was looking forward to it quite a
lot.
Why don't you go and quickly cheer him up?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
BGMStop();
ChClose(2,0,30);
ChClose(6,0,30);
MsgDisp("主人公","(I see, today is Valentine's day so I
guess he's getting excited over that...)");
MsgClose();
ScrFadeOut(0);
ChLayout(1);
