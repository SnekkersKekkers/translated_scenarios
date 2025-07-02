BGOpen("sc210",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("A020D00000_21_000");
MsgDisp("Michiru?","......There you are.
Hey, Hikaru—look!
It's her.");
VoicePlay("A020D00000_22_000");
MsgDisp("Hikaru?","Ah...!
The girl with Kazama-kun
yesterday!");
MsgDisp("主人公","(……?)");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_TWO");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
ChOpen(21,254,0,0,4,-1,-1,0,1);
ChOpen(22,254,0,0,0,-1,-1,0,2);
VoicePlay("A020D00000_21_010");
MsgDisp("Michiru?","You...
You weren't a student at
Habataki Middle School, were you?");
MsgDisp("主人公","Me?  
No, I didn't go to Habataki  
Middle school, actually...");
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,3,1);
VoicePlay("A020D00000_22_010");
MsgDisp("Hikaru?","If she did, Michiru,
we totally would've
noticed her already.");
ChEye(21,0);
ChMouth(21,4);
ChMotion(21,3);
VoicePlay("A020D00000_21_020");
MsgDisp("Michiru?","I know.");
MsgDisp("主人公","Huh?
I feel like I've seen you two somewh——");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("A020D00000_22_020");
MsgDisp("Hikaru?","Hehehe!
We're the \"Hanatsubaki Twins\"!
Mari▼");
MsgDisp("主人公","Mari?");
ChEye(21,1);
ChMouth(21,4);
ChMotion(21,5);
VoicePlay("A020D00000_21_030");
MsgDisp("Michiru?","Hikaru... 
Let's not use nicknames before 
we've properly introduced ourselves.");
MsgDisp("主人公","Wait, Michiru... Hikaru... You're the
\"Hanatsubaki Twins\" model twins!?∋");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,0);
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,5,1);
VoicePlay("A020D00000_22_030");
MsgDisp("Hikaru","Spot on♪
I'm Hanatsubaki Hikaru!▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,3);
VoicePlay("A020D00000_21_040");
MsgDisp("Michiru","And I'm Hanatsubaki Michiru.
It's a pleasure, Mari.");
MsgDisp("主人公","Wait...
You mean me? I'm... Mari?");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("A020D00000_21_050");
MsgDisp("Michiru","Yes.
A girl full of grace,
overflowing with charm...
Like a delicate flower in bloom..");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("A020D00000_22_040");
MsgDisp("Hikaru","Hehe～
It's subtle, but I can feel it.～");
MsgDisp("主人公","N-no way... I'm nothing like that...");
ChEye(22,4);
ChMouth(22,0);
ChMotion(22,0,1);
VoicePlay("A020D00000_22_050");
MsgDisp("Hikaru","You just haven't bloomed yet.
But your bud's already
starting to show color.
Right, sis?");
ChEye(21,4);
ChMouth(21,4);
ChMotion(21,0);
VoicePlay("A020D00000_21_060");
MsgDisp("Michiru","Don't think we're weird, okay?
The Hanatsubaki family...
holds a unique power.");
ChEye(21,4);
ChMouth(21,3);
ChMotion(21,4);
VoicePlay("A020D00000_21_070");
MsgDisp("Michiru","Which means...
we can already see it—
all the flowers waiting to bloom
in your high school life.");
ChEye(22,3);
ChMouth(22,3);
ChMotion(22,3,1);
VoicePlay("A020D00000_22_060");
MsgDisp("Hikaru","Yup yup!
And when love blossoms,
come straight to me, okay?▼");
ChEye(21,0);
ChMouth(21,3);
ChMotion(21,0);
VoicePlay("A020D00000_21_080");
MsgDisp("Michiru","And if it's fashion advice,
I've got you covered.");
MsgDisp("主人公","O-oh... okay!
Thank you so much,
Michiru-san... Hikaru-san!");
ChEye(22,0);
ChMouth(22,3);
ChMotion(22,4,1);
VoicePlay("A020D00000_22_070");
MsgDisp("Hikaru","Just call me \"Hikaru\", Mari～♪");
ChEye(21,0);
ChMouth(21,0);
ChMotion(21,3);
VoicePlay("A020D00000_21_090");
MsgDisp("Michiru","Same here— \"Michiru\" is fine.
See you around, Mari.");
MsgClose();
SEPlay("EV_SE_856");
BGMStop();
ChClose(21,0,30);
ChClose(22,0,30);
MsgDisp("主人公","(No way... The Hanatsubaki Twin models,
and relatives of world-famous designer
\"Hanatsubaki Gorou\"—
go to this school...!?)");
MsgDisp("主人公","((I can go to Michiru for fashion and
Hikaru for relationship advice......
Anyway, why do they call me \"Mari\"?)");
MsgClose();
ScrFadeOut(0,0);
