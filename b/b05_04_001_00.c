MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
ChEyeOpenLevel(4,-1);
ChMouthOpenLevel(4,-1);
ChCheek(4,0);
BGOpen("ne600",1);
ChLayout(1);
ChNanaType(0);
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,0);
ScrFadeIn(0);
VoicePlay("B050400100_04_000");
MsgDisp("Nanatsumori","Hmm--, we still have time.
What should we do.");
MsgDisp("主人公","That's right...");
VoicePlay("B050400100_04_010");
MsgDisp("Nanatsumori","...Hey actually, I——");
SEPlay("EV_SE_064");
MsgDisp("","(*GROWL*～)");
MsgDisp("主人公","Hehe!");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,1,1);
VoicePlay("B050400100_04_020");
MsgDisp("Nanatsumori","Well... IT's like that.");
ChEye(4,0);
ChMouth(4,0);
ChMotion(4,2,1);
MsgDisp("主人公","Then, let's go somewhere we can eat——");
ChEye(4,5);
ChMouth(4,1);
VoicePlay("B050400100_04_030");
MsgDisp("Nanatsumori","Ah∈");
MsgDisp("主人公","Eh?");
ChMotion(4,0,1);
VoicePlay("B050400100_04_040");
MsgDisp("Nanatsumori","This way!
Come on, quickly!");
SEPlay("EV_SE_504");
Wait(20,0);
MsgClose();
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
ChClose(4,0,30);
ScrQuake(1);
MsgClose();
ScrFadeOut(0);
MsgDisp("主人公","Waa, ｛七ツ森＊｝ ～∋");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGMPlay("BGM_C04_NANA_I",0.01);
StlOpen("ev_04_03");
StlEye(4,0);
StlMouth(4,0);
StlNear(1,0,0);
ScrFadeIn(0);
VoicePlay("B050400100_46_000");
MsgDisp("Clerk","Okay then, cool guy♪ The \"60 Minute
Kakigori Challenge\" starts now～∈");
MsgDisp("主人公","(T-There are so many kinds of kakkigori...
To keep eating this for 60 minutes...
｛七ツ森＊｝, is it really okay∋)");
VoicePlay("B050400100_04_050");
MsgDisp("Nanatsumori","Thanks for the meal.
Then, let's start with the 
\"Heaven Berry\" first.");
StlEye(4,1);
StlMouth(4,0);
VoicePlay("B050400100_04_060");
MsgDisp("Nanatsumori","...Damn!
What's this berry sauce?
The mix balnce is too perfect.");
StlEye(4,1);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
VoicePlay("B050400100_04_070");
MsgDisp("Nanatsumori","I'll try a bit of this one.
\"Devil Cocoa Mountain\"...");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("B050400100_04_080");
MsgDisp("Nanatsumori","Yum!
The cocoa powder is really rich!
The hidden milk pie is too awesome...");
MsgDisp("主人公","(Hehe.
｛七ツ森＊｝'s food commentary is dunny.')");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlEye(4,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5);
ScrFadeIn(0);
VoicePlay("B050400100_46_010");
MsgDisp("Clerk","Um, dear customer.
Even though you have 10 minutes left, 
we are terribly sorry to say...");
StlEye(4,0);
StlMouth(4,0);
VoicePlay("B050400100_04_090");
MsgDisp("Nanatsumori","Yeah?
What is it?");
VoicePlay("B050400100_46_020");
MsgDisp("Clerk","It's the kakigori sauce, 
we only have matcha left...");
StlEye(4,0);
StlMouth(4,1);
StlEyeOpenLevel(4,5);
VoicePlay("B050400100_04_100");
MsgDisp("Nanatsumori","Ah, that's cool.
'Matcha Whirlwind' is delicious, 
so I'm good with it. I'll take a refill.");
VoicePlay("B050400100_46_030");
MsgDisp("Clerk","C-Certainly!
One order of the \"Matcha whirlwind\"～!");
StlEye(4,0);
StlMouth(4,1);
VoicePlay("B050400100_04_110");
MsgDisp("Nanatsumori","Oh, could you add a little 
extra condensed milk, please?");
MsgDisp("主人公","(｛七ツ森＊｝, amazing...)");
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
StlClose();
BGMVol(0.5,2);
BGOpen("ne600",1);
MsgClose();
ChLayout(1);
ChNanaType(0);
ChOpen(4,255,0,2,2,-1,-1,0,0);
ScrFadeIn(0);
VoiceEVSPlay(4);
VoicePlay("B050400100_04_120");
MsgDisp("Nanatsumori","｛主人公｝, sorry.");
MsgDisp("主人公","Why are you apologising?");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,2,1);
VoicePlay("B050400100_04_130");
MsgDisp("Nanatsumori","I was the only one having fun, 
I was stuffing myself
and ended up neglecting you...");
MsgDisp("主人公","Nah. We enjoyed the movie together and I
had fun seeing seeing ｛七ツ森＊｝'s brave
form!");
ChEye(4,2);
ChMouth(4,2);
ChMotion(4,0,1);
VoicePlay("B050400100_04_140");
MsgDisp("Nanatsumori","No way...");
MsgDisp("主人公","It's true.");
ChEye(4,2);
ChMouth(4,2);
ChEyeOpenLevel(4,8);
ChMouthOpenLevel(4,0);
VoicePlay("B050400100_04_150");
MsgDisp("Nanatsumori","…………");
ChEye(4,2);
ChMouth(4,1);
ChMotion(4,2,1);
VoicePlay("B050400100_04_160");
MsgDisp("Nanatsumori","Instead of that kind of 'bravery,'
I should have shown you 
something...cooler.");
MsgDisp("主人公","Hehe.");
ChEye(4,2);
ChMouth(4,3);
ChMotion(4,0,1);
VoicePlay("B050400100_04_170");
MsgDisp("Nanatsumori","...Haha.");
ChPrmTblAdd(4,0);
