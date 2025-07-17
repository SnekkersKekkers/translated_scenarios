BGOpen("ne000",1);
ChLayout(1);
ScrFadeIn(0);
MsgDisp("主人公","(Phew...
Is it time to head home already?)");
VoicePlay("E010220100_03_000");
MsgDisp("Honda?","Sakku～ n!
Sakku～ n!");
MsgDisp("主人公","(Eh, this voice?...)");
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
BGMPlay("BGM_HANYOU_A",0.01);
MsgClose();
ChOpen(3,255,5,5,4,#1,#1,0,0);
VoicePlay("E010220100_03_010");
MsgDisp("Honda","Hey∋
It's not Sakkun, it's you.");
ChEye(3,0);
MsgDisp("主人公","｛本多＊＊｝, what's going on?
Yelling around?");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,1);
VoicePlay("E010220100_03_020");
MsgDisp("Honda","Oh yeah.
Earlier, at the transfer gate, I saw
Sakkun.");
MsgDisp("主人公","\"Sakkun\", you mean ｛颯砂＊＊｝?
Did you need anything?");
ChEye(3,4);
ChMouth(3,0);
ChMotion(3,4);
VoicePlay("E010220100_03_030");
MsgDisp("Honda","No, not really. But I can't see him and
not say hi, you see? But since I'm waiting
for my sister, I can't really move from
here.");
MsgDisp("主人公","Oh, I see.");
ChMotion(3,0);
VoicePlay("E010220100_02_000");
MsgDisp("Sassa?","He—y, Iku!");
ChPosition(3,1);
SEPlay("EV_SE_FOOT_RUN_COME_ALONE");
SEWait();
MsgClose();
ChOpen(2,255,5,5,0,#1,#1,0,2);
VoicePlay("E010220100_02_010");
MsgDisp("Sassa","Huh∋
You're here too?");
ChEye(2,0);
MsgDisp("主人公","Ah, ｛颯砂＊＊｝.");
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,3);
VoicePlay("E010220100_03_040");
MsgDisp("Honda","Sakkun!
Finally.");
ChEye(2,0);
ChMouth(2,0);
ChMotion(2,4);
VoicePlay("E010220100_02_020");
MsgDisp("Sassa","The passerbys were like \"Who's that Sakkun
person?\".");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,0);
VoicePlay("E010220100_02_030");
MsgDisp("Sassa","So, what did you want?");
ChEye(3,0);
ChMouth(3,4);
ChMotion(3,0);
VoicePlay("E010220100_03_050");
MsgDisp("Honda","What?");
MsgDisp("主人公","｛本多＊＊｝ saw you,
｛颯砂＊＊｝, so he thought it
wouldn't be nice not to say hello.");
ChMouth(2,2);
ChEye(3,0);
ChMouth(3,3);
ChMotion(3,1);
VoicePlay("E010220100_03_060");
MsgDisp("Honda","Yeah, that'd be a little sad, you know!");
VoicePlay("E010220100_02_050");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
MsgDisp("Sassa","Hu-h.
That's what I like about you, Iku!
It was worth coming back.");
ChEye(3,0);
ChMouth(3,0);
ChMotion(3,0);
VoicePlay("E010220100_03_070");
MsgDisp("Honda","Really?");
MsgDisp("主人公","Isn't it great, ｛本多＊＊｝.");
VoicePlay("E010220100_02_060");
ChEye(2,0);
ChMouth(2,4);
ChMotion(2,4);
MsgDisp("Sassa","Yeah, thanks to him, I got to see you!
Bye!");
MsgClose();
SEPlay("EV_SE_FOOT_WALK_AWAY_ALONE");
ChClose(2);
MsgClose();
ChPosition(3,0);
ChEye(3,4);
ChMouth(3,3);
ChMotion(3,4);
VoicePlay("E010220100_03_080");
MsgDisp("Honda","I see. I also got to see you thanks to
Sakkun today. It's a win-win!");
MsgDisp("主人公","(Huhu.
Yeah, we all got to see each other!)");
BGMStop();
MsgClose();
ScrFadeOut(0);
