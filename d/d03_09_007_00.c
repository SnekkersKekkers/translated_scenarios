BGOpen("wf000",0);
ChLayout(1);
SEPlay("EV_SE_588",0.2,0.2);
SEPlay("EV_SE_790",0.2,0.2);
ScrFadeIn(0);
Wait(50,1);
SEStop("EV_SE_588",3);
SEStop("EV_SE_790",3);
VoicePlay("D030900700_45_000");
MsgDisp("Woman A","I want one too!");
VoicePlay("D030900700_09_000");
MsgDisp("Kuya?","Sure, here you go.");
MsgDisp("主人公","(Huh?
That voice is...)");
BGMPlay("BGM_C09_KUYA_A",0.01);
MsgClose();
ChOpen(9,35,0,0,0,#1,#1,0,0);
VoicePlay("D030900700_46_000");
MsgDisp("Woman B","Me too, me too～!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900700_09_010");
MsgDisp("Kuya","Right away, here you go.");
MsgDisp("主人公","(Like I thought, it's Kuya-san!)");
ChPosition(9,1);
MsgClose();
SEPlay("EV_SE_544",0,0.5);
ChOpen(35,254,0,0,0,#1,#1,0,2);
VoicePlay("D030900700_35_020");
MsgDisp("Guy","Good job!
Come to my office once you finish giving
out those flyers～♪");
MsgDisp("主人公","(That guy with the flashy sunglasses, is
that...)");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,1,1);
VoicePlay("D030900700_09_020");
MsgDisp("Kuya","Your office?
No, I'm going home after I finish handing
these out.");
ChEye(35,1);
ChMouth(35,0);
VoicePlay("D030900700_35_030");
MsgDisp("Guy","That's no good!
I have plenty of tea for you so——");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
MsgDisp("主人公","Kuya-san!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900700_09_030");
MsgDisp("Kuya","Ah, hello.");
MsgDisp("主人公","...What are you doing?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900700_09_040");
MsgDisp("Kuya","I'm helping this guy hand out flyers.");
ChEye(35,2);
ChMouth(35,0);
VoicePlay("D030900700_35_040");
MsgDisp("Guy","Oh?
Your girlfriend is nice too～!");
ChEye(9,3);
ChMouth(9,4);
ChEyeOpenLevel(9,10);
MsgDisp("主人公","Kuya-san, let's go!
Hurry, this way!");
ChEye(9,3);
ChMouth(9,4);
ChMotion(9,4,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900700_09_050");
MsgDisp("Kuya","Eh?
But I haven't finished giving them out
yet——");
ChEye(9,5);
ChMouth(9,2);
ChMotion(9,5,1);
MsgDisp("主人公","You won't!");
ChEye(35,2);
ChMouth(35,1);
VoicePlay("D030900700_35_050");
MsgDisp("Guy","Ehh∋
Don't do that～!");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
MsgClose();
ChClose(35);
SEPlay("EV_SE_FOOT_RUN_AWAY_TWO");
SEWait();
BGOpen("wf100",0);
ChEye(9,2);
ChMouth(9,1);
ChMotion(9,0,1);
ChPosition(9,0);
ScrFadeIn(0);
MsgDisp("主人公","Haa...
Are you okay now?");
ChMotion(9,1,1);
VoicePlay("D030900700_09_060");
MsgDisp("Kuya","How terrible.
I didn't even finish helping him yet.");
MsgDisp("主人公","...Kuya-san, let me see those flyers.");
ChEye(9,2);
ChMouth(9,2);
ChMotion(9,0,1);
VoicePlay("D030900700_09_070");
MsgDisp("Kuya","...Go ahead.");
SEPlay("EV_SE_662");
SEWait();
MsgDisp("主人公","... Like I thought.
Here, take a look.");
MsgDisp("主人公","\"Local Idols Wanted!
Let's see the world together▼\"");
MsgDisp("主人公","... See?
Isn't that strange?");
VoicePlay("D030900700_09_090");
ChEye(9,2);
ChMouth(9,4);
ChMotion(9,4,1);
MsgDisp("Kuya","How so?");
MsgDisp("主人公","Why would local idols be traveling around
the world?");
VoicePlay("D030900700_09_100");
ChEye(9,3);
ChMouth(9,1);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
MsgDisp("Kuya","... Huh?
That is kind of weird, yeah.");
MsgDisp("主人公","Geez...
That guy is famous around here.
He's known to be a shady talent scout.");
VoicePlay("D030900700_09_110");
ChEye(9,2);
ChMouth(9,2);
ChMotion(9,1,1);
MsgDisp("Kuya","Really?
I had no idea...");
MsgDisp("主人公","Geez.
It's good to be kind to people but you
need to get to know them first, okay?");
VoicePlay("D030900700_09_120");
ChEye(9,2);
ChMouth(9,2);
ChMotion(9,2,1);
MsgDisp("Kuya","That's true...
I guess I almost got those women into
trouble, didn't I?");
VoicePlay("D030900700_09_130");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
MsgDisp("Kuya","Thanks for letting me know.
... I'm sorry.");
MsgDisp("主人公","No, I'm sorry for being so harsh.
Anyway...");
VoicePlay("D030900700_09_140");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
MsgDisp("Kuya","Yeah.
The picture on this flyer looks weird,
right?");
MsgDisp("主人公","Hehe!
Those of us who understand \"art\" can draw
something better, right?");
VoicePlay("D030900700_09_150");
ChEye(9,3);
ChMouth(9,3);
ChMotion(9,3,1);
ChEyeOpenLevel(9,0);
MsgDisp("Kuya","Haha!
Right!");
MsgDisp("主人公","(Haa...What a relief. Kuya-san is too
naive...Or I guess he's just too used
to others relying on him.)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
