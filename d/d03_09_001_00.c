BGOpen("wf230",0);
ChLayout(1);
ScrFadeIn(0);
VoicePlay("D030900100_09_000");
MsgDisp("Kuya?","So......
Did you get separated from your mother
around here?");
MsgDisp("主人公","(......
Huh?)");
VoicePlay("D030900100_44_000");
MsgDisp("Boy","I don't know.
Uーwah!");
VoicePlay("D030900100_09_010");
MsgDisp("Kuya?","I can't understand you if you cry.
Boys have to stay strong.");
MsgDisp("主人公","(That voice, it's......)");
MsgClose();
BGMPlay("BGM_C09_KUYA_I",0.01);
ChLayout(1);
ChOpen(9,35,0,0,0,#1,#1,0,0);
VoicePlay("D030900100_44_010");
MsgDisp("Boy","Hiccup......
Big brother Kuya, piggyback ride.");
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900100_09_020");
MsgDisp("Kuya?","Sure. Maybe I'll be able to hear you more
clearly like that. It'll make you look
like a baby, though.");
VoicePlay("D030900100_44_020");
MsgDisp("Boy","Sniff......
I don't want the piggyback ride anymore.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900100_09_030");
MsgDisp("Kuya?","Alright.
Come with me, I'll help you find your
mother.");
MsgDisp("主人公","Uhm!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,10);
VoicePlay("D030900100_09_040");
MsgDisp("Kuya?","Oh, you're......");
MsgClose();
ScrFadeOut(0);
ChClose(9);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("wf230",1);
ScrFadeIn(0);
VoicePlay("D030900100_44_030");
MsgDisp("Boy","Mommy!");
VoicePlay("D030900100_49_000");
MsgDisp("Woman","Geez, you bothered Kuya again.");
MsgClose();
ChOpen(9,35,0,3,0,#1,#1,0,0);
ChMotion(9,4,1);
VoicePlay("D030900100_09_050");
MsgDisp("Kuya?","It's fine.
Today we didn't cry or get any piggyback
rides, right?");
VoicePlay("D030900100_44_040");
MsgDisp("Boy","Yeah!");
VoicePlay("D030900100_49_010");
MsgDisp("Woman","You, really......
Thank you, Kuya-san.
You're always helping us.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,1,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900100_09_060");
MsgDisp("Kuya?","It's nothing, please don't worry about it.
This is my job.");
MsgDisp("主人公","(......
Job?)");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
BGOpen("wf200",1);
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,0,1);
MsgClose();
ScrFadeIn(0);
MsgDisp("主人公","Do you run into that mother and her son
often?");
ChMotion(9,3,1);
VoicePlay("D030900100_09_070");
MsgDisp("Kuya?","Yeah.
That kid is very energetic and gets
separated from his mother often.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900100_09_080");
MsgDisp("Kuya?","But today he did a great job.
He doesn't need me to give him piggyback
rides anymore.");
MsgDisp("主人公","Did you always carry him around on your
back?");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900100_09_090");
MsgDisp("Kuya?","That used to be the only way to get him to
stop crying.");
MsgDisp("Kuya?","Sometimes I'd have to carry him around for
hours, so I had to exercise frequently.");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900100_09_100");
MsgDisp("Kuya?","You should \"exercise\" frequently too so
you can be prepared for anything.
That way you won't have any worries.");
MsgDisp("主人公","Ah......Right. I usually work on my
\"fitness\" in various ways.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900100_09_110");
MsgDisp("Kuya?","So it seems.");
ChEye(9,0);
ChMouth(9,4);
ChMotion(9,2,1);
SEPlay("EV_SE_753");
SEWait();
ChEye(9,2);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900100_09_120");
MsgDisp("Kuya?","This is bad.
I have to hurry.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900100_09_130");
MsgDisp("Kuya?","I have something important to do so I'll
leave here.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
BGMStop();
ChClose(9);
MsgDisp("主人公","He also had something urgent to do the
other day......");
MsgDisp("主人公","(Ah. I forgot to properly thank him again!
He didn't even introduce himself properly,
but I heard \"Kuya-san\".)");
MsgClose();
ScrFadeOut(0,0);
