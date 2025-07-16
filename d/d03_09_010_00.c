BGOpen("ex070",0);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","Good day!
I'm here to have the notes and photos I
took for my interviews checked.");
VoicePlay("D030901000_41_000");
MsgDisp("Tanaka Shin","Ah, thanks for the hard work!
Let me take a look.");
MsgDisp("主人公","Yes, please go ahead!");
MsgClose();
SEPlay("EV_SE_DOOR_022");
SEWait();
BGMPlay("BGM_C09_KUYA_A",0.01);
ChOpen(9,35,0,0,0,#1,#1,0,0);
VoicePlay("D030901000_09_000");
MsgDisp("Kuya","Excuse me.");
MsgDisp("主人公","Eh, Kuya-san, what are you doing here?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901000_09_010");
MsgDisp("Kuya","It's been a while, huh?");
MsgDisp("主人公","Yeah.
It's been a while...... but......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030901000_09_020");
MsgDisp("Kuya","My sister called me here to help her with
something.");
VoicePlay("D030901000_45_000");
MsgDisp("Shirahane Mayo","Kuya, over here!");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030901000_09_030");
MsgDisp("Kuya","Coming.
See you later, then.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(9);
MsgDisp("主人公","(I can't believe I ran into him here......
I wonder how his studies are going?)");
MsgDisp("主人公","......! I need to focus on my work too!
Please check my work!");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgDisp("主人公","Thanks for checking my work!");
VoicePlay("D030901000_41_020");
MsgDisp("Tanaka Shin","Thanks for letting us use such great
material!");
MsgDisp("主人公","Yes!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ChOpen(9,35,0,0,0,#1,#1,0,0);
VoicePlay("D030901000_09_040");
MsgDisp("Kuya","Good job.");
MsgDisp("主人公","Ah, Kuya-san.
Did you just finish helping Mayo-san?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901000_09_050");
MsgDisp("Kuya","Yeah.
Are you finished now too?
Do you have some time to spare?");
MsgDisp("主人公","Yeah.");
BGMStop();
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf200",1);
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0);
ScrFadeIn(0);
VoicePlay("D030901000_09_060");
MsgDisp("Kuya","I really wanted to see you today no matter
what.");
MsgDisp("主人公","Eh?");
ChMotion(9,4,1);
VoicePlay("D030901000_09_070");
MsgDisp("Kuya","This is for you.");
SEPlay("EV_SE_664");
SEWait();
MsgDisp("主人公","......What's this?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901000_09_080");
MsgDisp("Kuya","Chocolate.
Because today is Valentine's Day.");
MsgDisp("主人公","Eh, but......
Sorry, I don't have anything prepared——");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
VoicePlay("D030901000_09_090");
MsgDisp("Kuya","It's fine.
I wanted to give it to you.");
MsgDisp("主人公","Thank you so much.
But isn't it weird to get chocolate from a
guy?");
ChMotion(9,0,1);
ChCheek(9,4);
VoicePlay("D030901000_09_100");
MsgDisp("Kuya","It's a common thing abroad.
On Valentine's you give gifts to the
people you love.");
MsgDisp("主人公","......Eh?");
ChEye(9,3);
ChMouth(9,0);
ChEyeOpenLevel(9,0);
VoicePlay("D030901000_09_110");
MsgDisp("Kuya","Hehe.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChCheek(9,1);
VoicePlay("D030901000_09_120");
MsgDisp("Kuya","By the way, how is it?
How are your studies going?");
MsgDisp("主人公","Ah......
Yeah, I'm managing.
What about Kuya-san?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,3,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030901000_09_130");
MsgDisp("Kuya","I'm trying my best.");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030901000_09_140");
MsgDisp("Kuya","Ah......
But yesterday I spent the whole day making
those chocolates.");
MsgDisp("主人公","Hehe.
It looks really yummy.
I'm excited to eat it!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,8);
VoicePlay("D030901000_09_150");
MsgDisp("Kuya","I'm glad.
I'm very grateful for you, for scolding me
and giving me goals.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
VoicePlay("D030901000_09_160");
MsgDisp("Kuya","So you don't need to give me anything in
return. I'm sure you'll keep teaching me a
lot of new things.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901000_09_170");
MsgDisp("Kuya","Ah......Is it okay to say that? But you
know, I'm hopeful. Haha!");
MsgDisp("主人公","(Hehe!
Kuya-san seems to be \"studying\" hard!
I need to work hard too!)");
MsgClose();
ScrFadeOut(0,0);
