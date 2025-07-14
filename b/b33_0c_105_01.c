BGOpen("ne100",0);
ChLayout(2);
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0,1);
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0,1);
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,0,1);
ScrFadeIn(0);
VoicePlay("B330C10501_05_000");
MsgDisp("Hiiragi","Do you all use a roller?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C10501_06_000");
MsgDisp("Himuro","You mean the adhesive
cleaning tool?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10501_05_010");
MsgDisp("Hiiragi","Yes. You roll it around to pick up debris.
The nae is good too.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,2);
VoicePlay("B330C10501_07_000");
MsgDisp("Mikage","Yeah, it's convenient.
Do you like the tape type or the washable
type, Yanosuke?");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10501_05_020");
MsgDisp("Hiiragi","Recently, I lean towards using the
washable type.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoicePlay("B330C10501_07_010");
MsgDisp("Mikage","Oh, me too.
There are ones that can be washed tens of
thousands of times");
MsgDisp("主人公","Hehe. You both seem to be very
knowledgable.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C10501_05_030");
MsgDisp("Hiiragi","It's an exceptional item.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,4);
VoicePlay("B330C10501_06_010");
MsgDisp("Himuro","I understand why Kojiro-sensei is since
he's been living alone for a long time,
but why you, Yanosuke-senpai?");
ChEye(5,4);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C10501_05_040");
MsgDisp("Hiiragi","Perhaps it's since I just like cleaning.
It feels truly wonderful to have
everything clean and tidy.");
ChEye(7,2);
ChMouth(7,0);
ChMotion(7,4);
ChEyeOpenLevel(7,0);
VoicePlay("B330C10501_07_020");
MsgDisp("Mikage","Yeah, the world is filled with things that
aren't tidy.");
ChEye(5,0);
ChMouth(5,2);
ChMotion(5,4);
ChEye(6,0);
ChMouth(6,3);
ChMotion(6,5);
VoicePlay("B330C10501_06_020");
MsgDisp("Himuro","Kojiro-sensei seems like he's prone to
complaining.");
ChEye(5,3);
ChMouth(5,4);
ChMotion(5,4);
VoicePlay("B330C10501_05_050");
MsgDisp("Hiiragi","Hehe, but I understand.
The more you clean, the more clean it
becomes.");
ChEye(7,0);
ChMouth(7,3);
ChMotion(7,1);
VoicePlay("B330C10501_07_030");
MsgDisp("Mikage","That's it.
Well, Inori you'll understand soon enough.");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,1);
ChEyeOpenLevel(6,8);
VoicePlay("B330C10501_06_030");
MsgDisp("Himuro","I'm fine with going on 
not understanding.");
ChEye(5,0);
ChMouth(5,4);
ChMotion(5,0);
VoicePlay("B330C10501_05_060");
MsgDisp("Hiiragi","Oh, that's right, that store sometimes
does live demonstrations of rollers.
Why don't we go and check it out?");
ChEye(6,0);
ChMouth(6,0);
ChMotion(6,0);
VoicePlay("B330C10501_06_040");
MsgDisp("Himuro","Live demonstrations?");
ChEye(5,3);
ChMouth(5,3);
ChMotion(5,3);
VoicePlay("B330C10501_05_070");
MsgDisp("Hiiragi","It's the most wonderful entertainment.
Hey, come on.");
MsgClose();
SEPlay("EV_SE_856");
ChClose(5,0,30);
ChClose(6,0,30);
ChClose(7,0,30);
ChLayout(1);
MsgClose();
ChOpen(7,255,0,0,0,#1,#1,0,0,0,30);
MsgDisp("主人公","Hehe, ｛柊＊＊＊｝ seems like he's really
enjoying himself.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,3);
VoicePlay("B330C10501_07_040");
MsgDisp("Mikage","Yeah, I'm pleased.
That Yanosuke and Inori are in such high
spirits.");
ChEye(7,0);
ChMouth(7,0);
ChMotion(7,1);
VoiceEVSPlay(7);
VoicePlay("B330C10501_07_050");
MsgDisp("Mikage","｛主人公｝, come on let's go!
That demonstration is super interesting.");
MsgDisp("主人公","Hehe, yes!");
MsgDisp("主人公","(It's not just ｛氷室＊＊｝ and
｛柊＊＊＊｝, ｛御影＊＊｝ also seems
like he's having so much fun. I'm glad we
came!)");
BGMStop();
MsgClose();
ScrFadeOut(0,0);
ChClose(7,0,0);
ChLayout(2);
ChOpen(5,255,7,0,0,#1,#1,0,3,0,0);
ChOpen(6,255,7,0,0,#1,#1,0,3,0,0);
ChOpen(7,255,7,0,0,#1,#1,0,3,0,0);
