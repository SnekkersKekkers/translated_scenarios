BGOpen("wf230",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(I wonder if that \"Kuya\" person is here.
I'd love to get an interview but I'd
especially like to thank him...)");
MsgDisp("主人公","(Will he show up again if there is someone
in trouble like last time?)");
MsgDisp("主人公","(But such a convenient thing like that
definitely won't happen, huh...)");
MsgDisp("主人公","Sigh... \"
Kuya\"-san, I wonder where you are?");
VoicePlay("D030900300_09_000");
MsgDisp("Kuya?","You called?");
MsgDisp("主人公","Eh?");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE");
SEWait();
ScrFadeOut(0);
StlOpen("ev_09_02");
StlEye(9,0);
StlMouth(9,0);
BGMPlay("BGM_C09_KUYA_B",0.01);
ScrFadeIn(0);
MsgDisp("主人公","Ah!
You're...");
VoicePlay("D030900300_09_010");
MsgDisp("Kuya?","You called?
Maybe you're in some kind of trouble?");
MsgDisp("主人公","I wanted to see you!");
StlEye(9,1);
VoicePlay("D030900300_09_020");
MsgDisp("Kuya?","Haha, so it seems, huh.");
MsgDisp("主人公","Eh, how did you know?");
StlEye(9,0);
VoicePlay("D030900300_09_030");
MsgDisp("Kuya?","I heard it from someone I know.
Someone in the Habatcher editorial
department.");
MsgDisp("Kuya?","To be honest, she's my older sister.");
MsgDisp("主人公","Someone in the editorial department...
Do you maybe mean Mayo Shirahane?");
StlEyeOpenLevel(9,5);
VoicePlay("D030900300_09_040");
MsgDisp("Kuya?","That's right.
She told me you were looking for me.");
MsgDisp("主人公","Ah, I am.
I've been looking for you for a while!
I just wanted to thank you.");
StlEye(9,0);
VoicePlay("D030900300_09_050");
MsgDisp("Kuya?","Thank me?
For what, I wonder...");
MsgDisp("主人公","The day we first met, you helped me when I
fell——");
StlEye(9,1);
VoicePlay("D030900300_09_060");
MsgDisp("Kuya?","Ah, the kiss.");
MsgDisp("主人公","Ehh∋");
StlEye(9,0);
StlEyeOpenLevel(9,5,1);
VoicePlay("D030900300_09_070");
MsgDisp("Kuya?","You're still worried about that?
You're so polite.");
MsgDisp("主人公","(It was a kiss on the cheek, now I
remember...)");
BGMVol(0.5,2);
MsgClose();
ScrFadeOut(0);
StlClose();
MsgClose();
ChLayout(0);
ChOpen(9,254,0,2,0,#1,#1,0,0);
ScrFadeIn(0);
ChMotion(9,4,1);
VoicePlay("D030900300_09_080");
MsgDisp("Kuya?","Your face is red.
Are you okay?");
MsgDisp("主人公","(Woah...
So close!)");
MsgDisp("主人公","Uhm, I'm fine!
By the way, that uniform...");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_COME_ALONE_SHORT",0.3,0.5);
ChClose(9,0,30);
ChLayout(1);
ChOpen(9,254,0,0,0,#1,#1,0,0,0,30);
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,3,1);
VoicePlay("D030900300_09_090");
MsgDisp("Kuya?","Oh, right.
I wanted to come here and properly
introduce myself.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900300_09_100");
MsgDisp("Kuya","I am Kuya Shirahane.
A second year student at Hanegasaki
Academy.");
MsgDisp("主人公","I'm ｛主人公姓名｝. A first year
student at Habataki High School.
Uhm...Shirahane-san?");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900300_09_110");
MsgDisp("Kuya","Just Kuya is fine.
That's what everyone calls me.");
MsgDisp("主人公","Then...Kuya-san. I want to thank you again
for helping me. I'm really grateful!");
ChMotion(9,0,1);
VoicePlay("D030900300_09_120");
MsgDisp("Kuya","You're welcome.
There, did that solve your problem?");
MsgDisp("主人公","Hehe, yes!");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,7);
VoicePlay("D030900300_09_130");
MsgDisp("Kuya","I'm glad to hear that.
For some reason, I tend to encounter
people in troublesome situations a lot.");
VoicePlay("D030900300_09_140");
MsgDisp("Kuya","You know how I told you before that it's
my \"job?\"");
MsgDisp("Kuya","Because I have this sort of power, I've
become a \"Jack of All Trades\" who goes
around helping people in need.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,4,1);
ChEyeOpenLevel(9,0);
VoicePlay("D030900300_09_150");
MsgDisp("Kuya","But...I guess today I have a situation of
my own to deal with? It's a strange
feeling.");
MsgDisp("主人公","Hehe.");
ChEye(9,3);
ChMouth(9,0);
ChMotion(9,0,1);
VoicePlay("D030900300_09_160");
MsgDisp("Kuya","So you're working part-time as a
journalist for the Habatcher editorial
department, right?");
MsgDisp("主人公","Yep, that's right.
So, you know...");
ChEye(9,0);
ChMouth(9,0);
ChMotion(9,4,1);
VoicePlay("D030900300_09_170");
MsgDisp("Kuya","Good luck. As a journalist you have to
have a keen sense for \"style\". I'll cheer
you on from the shadows.");
MsgDisp("主人公","Thank you so much.
Uhm, actually, I was wondering if I I
could interview——");
ChMotion(9,0,1);
VoicePlay("D030900300_09_180");
MsgDisp("Kuya","Here we are, then.
It's time for me to do my usual lost and
found patrol around the park entrance.");
MsgClose();
BGMStop();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(9);
MsgDisp("主人公","(He left...
It seems like getting an interview with
Kuya-san might take a while?)");
MsgClose();
ScrFadeOut(0,0);
