BGOpen("ho210",0);
ChLayout(1);
ScrFadeIn(0);
SEPlay("EV_SE_577");
MsgDisp("主人公","(A phone call.
Ah......an private number!)");
SEPlay("SYS_SE_PHONE_POWER_ON");
SEStop("EV_SE_577",0);
SEWait();
MsgDisp("主人公","Hello, Kuya-san?");
VoicePlay("D030901400_09_000");
MsgDisp("Kuya","Hehe, you got it.
You know......");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEWait();
BGOpen("wf000",0);
ScrFadeIn(0);
MsgDisp("主人公","(We're supposed to meet up in front of the
escalator at Habataki Station......
But Kuya-san isn't here yet.)");
VoicePlay("D030901400_09_010");
MsgDisp("Kuya?","Sorry, did I make you wait?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
BGMPlay("BGM_C09_KUYA_A",0.01);
ChOpen(9,255,0,0,0,#1,#1,0,0);
MsgDisp("主人公","Eh......");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030901400_09_020");
MsgDisp("Kuya","Why are you surprised?");
ChEyeOpenLevel(9,#1);
MsgDisp("主人公","Ah, sorry!
Usually when I see you, you're dressed
casually or in uniform......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901400_09_030");
MsgDisp("Kuya","Ahh...... Today is a normal date with Kuya
Shirahane.");
ChMotion(9,1,1);
VoicePlay("D030901400_09_040");
MsgDisp("Kuya","I won't be wearing the Hanegasaki uniform
anymore, and I'm no longer a jack of all
trades.");
MsgDisp("主人公","(It feels kind of weird, somehow......)");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_FOOT_WALK_AWAY_TWO");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMVol(0.5,2);
BGOpen("wf200",0);
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ScrFadeIn(0);
VoicePlay("D030901400_09_050");
MsgDisp("Kuya","Oh, a soft-serve ice cream truck.
Want to get some?");
MsgDisp("主人公","Yes......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,2,1);
ChEyeOpenLevel(9,8);
VoicePlay("D030901400_09_060");
MsgDisp("Kuya","Haha, isn't this nostalgic?
On our first date......No, didn't we eat
this during the interview?");
MsgDisp("主人公","Yeah......");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030901400_09_070");
MsgDisp("Kuya","What's wrong?
You're not in the mood for ice cream?");
MsgDisp("主人公","That's not it!
Uhm......Kuya-san, you've changed, haven't
you?");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030901400_09_080");
MsgDisp("Kuya","......I've changed?
How so?");
MsgDisp("主人公","It's because......Even though there were
people asking for directions and asking
you to carry their luggage......");
MsgDisp("主人公","You didn't help them.
That's completely unlike the Jack of All
Trades.");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,0,1);
VoicePlay("D030901400_09_090");
MsgDisp("Kuya","But I told them where to go and I asked
someone else to carry their luggage.
I guess I've been giving advice?");
MsgDisp("主人公","That's true but......
It's so unlike Kuya-san......");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("D030901400_09_100");
MsgDisp("Kuya","Haha.
I've just changed my priorities.");
MsgDisp("主人公","Eh?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,6);
VoicePlay("D030901400_09_110");
MsgDisp("Kuya","Right now, spending time with you is more
important to me.
So doing it this way is better.");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030901400_09_120");
MsgDisp("Kuya","Huh......?
Is that maybe a bit weird?");
MsgDisp("主人公","No...... Kuya-san, are you going to stop
being a \"Jack of All Trades\"?");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,1,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030901400_09_130");
MsgDisp("Kuya","That's not it.
But......I guess it's true that my work
style in becoming more simple.");
MsgDisp("主人公","Hehe!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,8);
VoicePlay("D030901400_09_140");
MsgDisp("Kuya","Good, you finally laughed.
Come, today will be a nice change of pace.
Let's eat some ice cream together!");
MsgDisp("主人公","Okay!");
MsgDisp("主人公","(It definitely feels like Kuya-san is
changing. I get the feeling he's become
more dependable......?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
