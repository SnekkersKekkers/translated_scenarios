BGMStop();
MsgClose();
ScrFadeOut(0);
ChLayout(1);
BGMPlay("BGM_ENGEKI_D",0.01);
MsgDisp("主人公","Ah... you!
Where are you?");
VoicePlay("P240400000_04_000");
MsgDisp("Nanatsumori","...Belle.");
MsgDisp("主人公","∈");
MsgClose();
StlOpen("ev_04_15");
StlEye(4,0);
StlMouth(4,0);
ScrFadeIn(0);
VoicePlay("P240400000_04_010");
MsgDisp("Nanatsumori","Why did you come back here...");
MsgDisp("主人公","\"Why?\"...
To see you.");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,5,1);
VoicePlay("P240400000_04_020");
MsgDisp("Nanatsumori","I see. Thank you.
Though I'm... already...");
StlEye(4,0,0);
StlMouth(4,0);
StlEyeOpenLevel(4,0,1);
MsgDisp("主人公","∈
No... please, open your eyes!");
MsgDisp("主人公","I... 
I love you. I love you!
...Please!");
StlEye(4,1,0);
StlMouth(4,1);
StlMouthOpenLevel(4,0,1);
VoicePlay("P240400000_04_030");
MsgDisp("Nanatsumori","…………");
MsgDisp("主人公","(Eh?)");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("P240400000_04_040");
MsgDisp("Nanatsumori","Actually,
at this point I should dazzlingly～
turn back into a handsome guy, huh?");
MsgDisp("主人公","Y-yeah, that's right.
That's why you should start getting up...");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("P240400000_04_050");
MsgDisp("Nanatsumori","Is that really okay?
For the Heroine.");
StlEye(4,1,0);
StlMouth(4,1);
StlEyeOpenLevel(4,5,1);
VoicePlay("P240400000_04_060");
MsgDisp("Nanatsumori","Because she loves me as the beast, right?
After this I'll look like a 
completely different person.");
MsgDisp("主人公","But even if you say that, 
that's the story's happy ending...");
StlEye(4,1);
StlMouth(4,1);
VoicePlay("P240400000_04_070");
MsgDisp("Nanatsumori","I don't understand it-.");
StlEye(4,1,0);
StlMouth(4,1);
StlEyeOpenLevel(4,0,1);
VoicePlay("P240400000_04_080");
MsgDisp("Nanatsumori","...But I guess I'll follow the story.");
MsgClose();
ScrFadeOut(0);
SEPlay("EV_SE_588",0,0.5);
SEPlay("EV_SE_GAYA_021");
SEPlay("EV_SE_CLAP_002");
BGMStop(3);
Wait(120,0);
MsgDisp("","　　　　　　　　　　 ・
　　　　　　　　　　 ・
　　　　　　　　　　 ・");
SEStop("EV_SE_588",1.5);
SEStop("EV_SE_CLAP_002",1.5);
SEStop("EV_SE_GAYA_021",1.5);
MsgClose();
StlClose();
BGOpen("sc740",0);
MsgClose();
ChNanaType(1);
ChOpen(4,38,0,2,1,8,-1,0,0);
ScrFadeIn(0);
MsgDisp("主人公","I'm gladー!
The play ended without any problems...");
ChMotion(4,2);
VoicePlay("P240400000_04_090");
MsgDisp("Nanatsumori","I don't agreeー.");
MsgDisp("主人公","Come on.");
ChEye(4,0);
ChMotion(4,1,1);
VoicePlay("P240400000_04_100");
MsgDisp("Nanatsumori","Which one do you prefer?
Ｎａｎａ or Nanatsumori?");
MsgDisp("主人公","Eh?");
ChEye(4,2);
ChMouth(4,4);
ChMotion(4,2,1);
ChMouthOpenLevel(4,0);
VoicePlay("P240400000_04_110");
MsgDisp("Nanatsumori","…………");
ChMouthOpenLevel(4,-1);
VoicePlay("P240400000_04_120");
MsgDisp("Nanatsumori","Sorry for asking something so trivial.
Forget it.");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
MsgClose();
ChClose(4);
MsgDisp("主人公","(｛七ツ森＊｝...
what's wrong?)");
MsgDisp("主人公","(Still, the cheers after Nanatsumori's
makeup was removed was amazing... I wonder
if that revealed ｛七ツ森＊｝ 's true
identity...')");
MsgClose();
ScrFadeOut(0,0);
ChClose(4,0,0);
ChPrmTblAdd(4,0);
