ChLayout(1);
ChClose(3,0,0);
ScrFadeIn(0);
MsgDisp("主人公","Hm... looks like ｛本多＊＊｝
isn't here yet.");
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
MsgClose();
SEPlay("EV_SE_557",0.2);
ChOpen(34,254,0,0,0,#1,#1,0,0);
VoicePlay("B110300001_34_000");
MsgDisp("Guy","Are you a stray?
Should I protect you?");
MsgDisp("主人公","Stray?
I think you've got the wrong person...");
ChEye(34,1);
ChMouth(34,0);
VoicePlay("B110300001_34_010");
MsgDisp("Guy","It's not a mistake.
See, when a stray roams around alone, they
get targeted.");
MsgDisp("主人公","What are you talking about?");
ChPosition(34,1);
SEPlay("EV_SE_550");
BGMPlay("BGM_PLACE_BEACH",0.01);
MsgClose();
ChOpen(3,31,0,0,4,#1,#1,0,2);
VoicePlay("B110300001_03_000");
MsgDisp("Honda","Sorry for being a bit late.");
MsgDisp("主人公","Ah, ｛本多＊＊｝!");
ChEye(34,2);
ChMouth(34,2);
VoicePlay("B110300001_34_020");
MsgDisp("Guy","Ugh, who are you?
What guild are you from?
Don't get in the way...");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1,1);
MsgDispSksp(1,5);
VoicePlay("B110300001_03_010");
MsgDisp("Honda","I'm not getting in your way.
I'm just interested in you.");
MsgDispSksp(0);
ChEye(34,2);
ChMouth(34,1);
VoicePlay("B110300001_34_030");
MsgDisp("Guy","W-What?
Don't look straight at me like that...");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0,1);
MsgDispSksp(1,5);
VoicePlay("B110300001_03_020");
MsgDisp("Honda","Could it be that the hood and sunglasses
are to avoid people's gazes?
You should stop doing that.");
MsgDispSksp(0);
ChEye(34,1);
ChMouth(34,1);
VoicePlay("B110300001_34_040");
MsgDisp("Guy","W-What do you know!
First of all, this is is just an avatar
and——");
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4,1);
MsgDispSksp(1,5);
VoicePlay("B110300001_03_030");
MsgDisp("Honda","This is the sea, the real sea.
Won't you come out from the virtual world?");
MsgDispSksp(0);
ChEye(34,0);
ChMouth(34,0);
VoicePlay("B110300001_34_050");
MsgDisp("Guy","... You're actually a good person.
Hah, I'll try to relax by the real sea
today!");
SEPlay("EV_SE_531");
ChClose(34,0,30);
ChPosition(3,0);
ChEye(3,4);
ChMouth(3,4);
ChMotion(3,4,1);
VoicePlay("B110300001_03_040");
MsgDisp("Honda","... You must be lonely, right?
I can understand what it's like to be a
shut-in.");
MsgDisp("主人公","(｛本多＊＊｝, wow... that guy was opening
up their heart.)");
ChEyeOpenLevel(3,#1);
ChMouthOpenLevel(3,#1);
ChCheek(3,0);
