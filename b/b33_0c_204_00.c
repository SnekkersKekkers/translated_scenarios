BGOpen("fp000",0);
ChLayout(2);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B330C20400_06_000");
MsgDisp("Himuro","I've been coming to this forest
park since I was young.");
MsgDisp("主人公","Yeah. I came here a 
lot on elementary school trips.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20400_07_000");
MsgDisp("Mikage","I see. Since both of you grew up in
Habataki city huh.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
VoicePlay("B330C20400_05_000");
MsgDisp("Hiiragi","I've still got a long way to go.
There's quite a lot of places
I haven't been yet.");
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0);
VoicePlay("B330C20400_06_010");
MsgDisp("Himuro","That's because you're busy with work,
Yanosuke-senpai.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20400_07_010");
MsgDisp("Mikage","Then, is there a place you'd 
like to go today Yanosuke?");
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,3);
VoicePlay("B330C20400_06_020");
MsgDisp("Himuro","Sounds good.
Is there a part of the forest 
park that interests you?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C20400_05_010");
MsgDisp("Hiiragi","Is that okay?
To go by my wishes.");
MsgDisp("主人公","Yeah.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C20400_05_020");
MsgDisp("Hiiragi","...Then, I'm rather curious
about the swan boats.");
MsgClose();
ScrFadeOut(0,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
BGOpen("fp200",0);
ChEye(6,0);
ChMouth(6,4);
ChMotion(6,0,1);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1,1);
ScrFadeIn(0);
VoicePlay("B330C20400_07_020");
MsgDisp("Mikage","Yanosuke, how was it?
The dearly desired swan boat.");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C20400_05_030");
MsgDisp("Hiiragi","Yes.
When you actually ride it, your feet have 
be to be quite busy. If I didn't 
experience it, I wouldn't have known.");
MsgDisp("主人公","Hehe, yeah.
It's a bit tiring.");
ChEye(5,0);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330C20400_06_030");
MsgDisp("Himuro","...Kojiro-sensei.
Was it really necessary for 
us to also ride as a pair?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20400_07_030");
MsgDisp("Mikage","Of course?
That was fun, Inori.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,2);
ChEyeOpenLevel(6,0);
VoicePlay("B330C20400_06_040");
MsgDisp("Himuro","Haa...
I only hope that no one saw us.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C20400_07_040");
MsgDisp("Mikage","How cold.");
MsgDisp("主人公","Hehe, looks like you both had fun?");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("B330C20400_07_050");
MsgDisp("Mikage","｛主人公｝, sorry.
Ride with Inori too.");
MsgDisp("主人公","Yeah, that's fine.");
ChEye(5,4);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,5);
VoicePlay("B330C20400_06_050");
MsgDisp("Himuro","Eh, I don't really...");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C20400_07_060");
MsgDisp("Mikage","Then, do you want to ride
with me again?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("B330C20400_06_060");
MsgDisp("Himuro","No thanks.
...Alright, let's go.");
MsgClose();
SEPlay("EV_SE_626");
ChClose(6);
ChMotion(5,0);
VoicePlay("B330C20400_06_070");
MsgDisp("Himuro","Let's go on the rowboat 
instead of the swanboat.");
MsgDisp("主人公","(Hehe! I wonder if ｛氷室＊＊｝ was 
embarrassed about the swan boat?)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(5,0,0);
ChClose(7,0,0);
ChLayout(2);
ChOpen(5,253,7,0,0,-1,-1,0,3,0,0);
ChOpen(6,253,7,0,0,-1,-1,0,3,0,0);
ChOpen(7,253,7,0,0,-1,-1,0,3,0,0);
