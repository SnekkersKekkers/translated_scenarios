BGOpen("ho210",0);
ScrFadeIn(0);
MsgDisp("主人公","(Today I'm on the hunt for a new Habatcher
Article, I think I'll walk around town!)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp200",0);
ScrFadeIn(0);
MsgDisp("主人公","(......Huh? I wonder how I ended up at
\"The Home of the Fireflies\".)");
MsgDisp("主人公","(It's almost like something was calling me
here......?)");
VoicePlay("D200000200_31_000");
MsgDisp("Goro?","There's a burning feeling......
This is a bad omen.");
MsgDisp("主人公","∋");
MsgClose();
SEPlay("EV_SE_628",0,0.6);
SEWait();
BGMPlay("BGM_C31_GORO_A",0.01);
ChOpen(31,254,7,4,0,#1,#1,0,0);
MsgDisp("主人公","Ah, Goro-sensei!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000200_31_010");
MsgDisp("Goro","Hello. I can see you're hard at work
looking for an interview.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("D200000200_31_020");
MsgDisp("Goro","But you can't only focus on that, don't
waste all of your energy in one place.");
MsgDisp("主人公","Eh?");
ChEye(31,2);
ChMouth(31,2);
ChMotion(31,3);
VoicePlay("D200000200_31_030");
MsgDisp("Goro","I can feel it in the air.
This sensation......It's an SOS for a man
troubled by love.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000200_31_040");
MsgDisp("Goro","Listen to me.
There is a man at your side who is burning
with jealousy!");
MsgDisp("主人公","∋");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,2);
VoicePlay("D200000200_31_050");
MsgDisp("Goro","You're something of a player, aren't you?
Hehe, I'm the same way♪");
MsgDisp("主人公","Uhm......");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000200_31_060");
MsgDisp("Goro","Do you get it?
Once the flames of jealousy get burning,
they can't easily be extinguished.");
MsgDisp("主人公","Eh!");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,3);
VoicePlay("D200000200_31_070");
MsgDisp("Goro","If you want to quell the flames, bring
your boyfriend here when the fireflies
come out.");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,0);
VoicePlay("D200000200_31_080");
MsgDisp("Goro","And then touch the blue firefly.
Those ones have a mysterious ability to
soothe jealousy.");
MsgDisp("主人公","Touch the blue firefly......");
ChEye(31,0);
ChMouth(31,0);
ChMotion(31,4);
VoicePlay("D200000200_31_090");
MsgDisp("Goro","That's right. I hope you can extinguish
those flames. Adieu▼");
MsgClose();
SEPlay("EV_SE_626");
BGMStop();
ChClose(31);
MsgDisp("主人公","(He's gone......)");
MsgDisp("主人公","(It's didn't know the fireflies had such a
power. But hmm, jealousy...... Right.
Maybe I can write a story about this too?)");
MsgClose();
ScrFadeOut(0,0);
